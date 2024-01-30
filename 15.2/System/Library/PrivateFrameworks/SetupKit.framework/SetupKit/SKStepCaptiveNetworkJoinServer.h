@class NSString, NSError, NSObject;
@protocol OS_dispatch_queue, CUMessaging;

@interface SKStepCaptiveNetworkJoinServer : NSObject <CULabelable, SKStepable> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    id /* block */ _responseHandler;
    int _runState;
    unsigned long long _startTicks;
    BOOL _stepDone;
    NSError *_stepError;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (readonly, nonatomic) double metricTotalSeconds;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ skCompletionHandler;
@property (retain, nonatomic) id<CUMessaging> skMessaging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_completeWithError:(id)a0;
- (void)activate;
- (id)init;
- (void)_activate;
- (void)invalidate;
- (void)_run;
- (void)_invalidated;
- (void)dealloc;

@end
