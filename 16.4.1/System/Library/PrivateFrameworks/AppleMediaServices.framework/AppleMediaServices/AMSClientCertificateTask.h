@class AMSKeychainOptions, NSObject;
@protocol OS_dispatch_queue;

@interface AMSClientCertificateTask : AMSTask

@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain) AMSKeychainOptions *options;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)_baaOptionsWithOptions:(id)a0 error:(id *)a1;
- (id)performClientCertChainRequest;

@end
