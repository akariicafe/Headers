@class CAGradientLayer, NSString, CXCallObserver, DKMutableDiagnosticResult, DKDiagnosticContext, NSLock, _UILegibilityLabel;

@interface DKDiagnosticViewController : UIViewController <CXCallObserverDelegate, DKDiagnostic_Internal, CAAnimationDelegate, NSExtensionRequestHandling, DKDiagnostic>

@property (retain, nonatomic) CXCallObserver *callObserver;
@property (retain, nonatomic) DKDiagnosticContext *context;
@property (retain, nonatomic) NSLock *finishedLock;
@property (retain, nonatomic) _UILegibilityLabel *pressHomeLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL shouldShowPressHomeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (nonatomic, getter=isSetup) BOOL setup;
@property (retain, nonatomic) DKMutableDiagnosticResult *result;
@property (nonatomic, getter=isFinished) BOOL finished;

- (void)callObserver:(id)a0 callChanged:(id)a1;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)viewDidLoad;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)cancel;
- (void)displayPressHomeLabel;
- (void)monitorIncomingCall;
- (void)createGradientLayer;
- (void)resetGradientAndLabelBefore:(BOOL)a0;

@end
