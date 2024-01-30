@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SKStepWiFiSetupClient : NSObject <CUActivatable, CULabelable, SKStepable> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    int _runState;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)invalidate;
- (BOOL)runStep;

@end
