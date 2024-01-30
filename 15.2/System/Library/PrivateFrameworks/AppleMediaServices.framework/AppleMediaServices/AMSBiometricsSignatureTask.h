@class AMSBiometricsSignatureRequest;

@interface AMSBiometricsSignatureTask : AMSTask

@property (readonly, nonatomic) AMSBiometricsSignatureRequest *request;

- (id)initWithRequest:(id)a0;
- (id)performSignature;
- (id)_performSignatureInProcess;
- (id)_performSignatureOutOfProcess;
- (BOOL)_performCardEnrollmentCheck:(id *)a0;
- (void).cxx_destruct;

@end
