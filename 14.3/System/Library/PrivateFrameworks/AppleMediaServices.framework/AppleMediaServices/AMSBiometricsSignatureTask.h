@class AMSBiometricsSignatureRequest;

@interface AMSBiometricsSignatureTask : AMSTask

@property (readonly, nonatomic) AMSBiometricsSignatureRequest *request;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)performSignature;
- (id)_performSignatureOutOfProcess;
- (id)_performSignatureInProcess;
- (BOOL)_performCardEnrollmentCheck:(id *)a0;

@end
