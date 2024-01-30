@class NSString, DKDiagnosticContext, NSLock, DKMutableDiagnosticResult;

@interface DKDiagnosticController : NSObject <DKDiagnostic_Internal, NSExtensionRequestHandling, DKDiagnostic>

@property (nonatomic) BOOL isXPC;
@property (retain, nonatomic) DKDiagnosticContext *context;
@property (retain, nonatomic) NSLock *finishedLock;
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
- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)a0;
- (void)start;
- (void)beginRequestWithDiagnosticContext:(id)a0;

@end
