@class CCVegaJSDocument, JSContext, CCVegaWorkerClient, JSVirtualMachine, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CCVegaWorker : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    int _currentTimerIndex;
    NSMutableDictionary *_timers;
    BOOL _vegaLiteLoaded;
    BOOL _vegaParserLoaded;
}

@property (retain) JSVirtualMachine *virtualMachine;
@property (retain) JSContext *context;
@property (retain, nonatomic) CCVegaJSDocument *document;
@property (weak) CCVegaWorkerClient *currentClient;
@property (copy) id /* block */ onDealloc;
@property (readonly) unsigned long long dispatchQueueID;

+ (void)cleanUp;
+ (void)cleanUpWithCallback:(id /* block */)a0;
+ (id)sharedWorker;

- (id)dispatchQueue;
- (void)dealloc;
- (id)init;
- (void)setupConsole;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)setupContext;
- (void)requireVegaLite;
- (int)nextTimerIndex;
- (void)registerExpressionFunction:(id /* block */)a0 withName:(id)a1;
- (void)registerProxyExpressionFunction:(id)a0;
- (void)requireVegaParser;
- (void)setupTimerFunctions;
- (void)waitForWorker;

@end
