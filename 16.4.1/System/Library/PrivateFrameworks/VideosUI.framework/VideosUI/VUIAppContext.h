@class NSError, NSString, JSContext, NSMutableArray, NSObject, VUIJSApplication, VUIAppReloadContext, VUIJSFoundation;
@protocol OS_dispatch_source, VUIAppContextDelegate, VUIApplication;

@interface VUIAppContext : NSObject {
    BOOL _respondsToTraitCollection;
    struct __CFRunLoop { } *_jsThreadRunLoop;
    struct __CFRunLoopSource { } *_jsThreadRunLoopSource;
    NSObject<OS_dispatch_source> *_lowMemoryWarningSource;
}

@property (copy, nonatomic) NSString *nextJSChecksum;
@property (readonly, nonatomic) NSMutableArray *onStartQueue;
@property (nonatomic) BOOL canAccessPendingQueue;
@property (copy, nonatomic) NSString *responseScript;
@property (retain, nonatomic) NSError *responseError;
@property (retain, nonatomic) VUIAppReloadContext *reloadContext;
@property (getter=isRunning) BOOL running;
@property (retain, nonatomic) NSMutableArray *pendingQueue;
@property (retain, nonatomic) NSMutableArray *postEvaluationBlocks;
@property (retain, nonatomic) JSContext *jsContext;
@property BOOL isValid;
@property (readonly, weak, nonatomic) id<VUIApplication> app;
@property (readonly, nonatomic) unsigned long long mode;
@property (retain, nonatomic) VUIJSApplication *jsApp;
@property (retain, nonatomic) VUIJSFoundation *jsFoundation;
@property (readonly, weak, nonatomic) id<VUIAppContextDelegate> delegate;
@property (nonatomic) double appScriptTimeoutInterval;
@property (nonatomic) BOOL remoteInspectionEnabled;

+ (id)currentAppContext;

- (void)reload;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)evaluate:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)evaluateDelegateBlockSync:(id /* block */)a0;
- (id)initWithApplication:(id)a0 mode:(unsigned long long)a1 delegate:(id)a2;
- (void)resumeWithOptions:(id)a0;
- (void)setException:(id)a0 withErrorMessage:(id)a1;
- (void)suspendWithOptions:(id)a0;
- (void)_dispatchError:(id)a0;
- (void)_stopAndReload:(BOOL)a0;
- (void)_addStopRecordToPendingQueueWithReload:(BOOL)a0;
- (id)_appTraitCollection;
- (void)_doEvaluate:(id /* block */)a0;
- (void)_drainOnStartQueue;
- (void)_enqueueOnStartOrExecute:(id /* block */)a0;
- (id)_errorWithMessage:(id)a0;
- (void)_evaluate:(id /* block */)a0;
- (void)_invalidateJSThread;
- (void)_jsThreadMain;
- (BOOL)_prepareStartWithURL:(id)a0;
- (void)_sourceCanceledOnRunLoop:(struct __CFRunLoop { } *)a0;
- (void)_sourcePerform;
- (void)_sourceScheduledOnRunLoop:(struct __CFRunLoop { } *)a0;
- (void)addPostEvaluateBlock:(id /* block */)a0;
- (void)contextDidFailWithError:(id)a0;
- (void)contextDidStartWithJS:(id)a0 options:(id)a1;
- (void)contextDidStopWithOptions:(id)a0;
- (void)evaluateFoundationJS;
- (void)exitAppWithOptions:(id)a0;
- (void)handleReloadWithUrgencyType:(unsigned long long)a0 minInterval:(double)a1 data:(id)a2;
- (void)launchAppWithOptions:(id)a0;
- (void)openURLWithOptions:(id)a0;
- (void)_addPrivateInterfaces;
- (void)_startWithScript:(id)a0 scriptUrl:(id)a1;
- (void)_startWithURL:(id)a0;

@end
