@class NSString, DKDiagnosticContextMock, NSLock, DKMutableDiagnosticResult;

@interface DKDiagnosticViewControllerMock : UIViewController <DKDiagnostic_Internal, CAAnimationDelegate, DKDiagnosticMock>

@property (retain, nonatomic) DKDiagnosticContextMock *context;
@property (retain, nonatomic) NSLock *finishedLock;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) Class inputsClass;
@property (nonatomic) BOOL shouldShowPressHomeLabel;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic, getter=isSetup) BOOL setup;
@property (retain, nonatomic) DKMutableDiagnosticResult *result;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)beginRequestWithInputsClass:(Class)a0 predicates:(id)a1 specifications:(id)a2 parameters:(id)a3 completion:(id /* block */)a4;

@end
