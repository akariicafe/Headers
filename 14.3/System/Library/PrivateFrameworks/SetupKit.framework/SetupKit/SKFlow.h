@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SKFlow : NSObject <CUActivatable, CULabelable> {
    BOOL _activateCalled;
    NSMutableArray *_activatedSteps;
    unsigned long long _currentStepIndex;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    int _runState;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (copy, nonatomic) id /* block */ buildStepsHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;

- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (id)description;
- (void)invalidate;
- (void)activateStep:(id)a0;
- (void)_runSteps;

@end
