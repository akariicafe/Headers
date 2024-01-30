@class SSURLBag, NSString, SSVPlaybackLeaseConfiguration, NSObject;
@protocol OS_dispatch_semaphore;

@interface SSVLeaseCertificateRequestOperation : SSVComplexOperation {
    NSObject<OS_dispatch_semaphore> *_bagLoadSemaphore;
    NSString *_certificateURLBagKey;
    SSVPlaybackLeaseConfiguration *_configuration;
    id /* block */ _outputBlock;
    SSURLBag *_urlBag;
}

@property (copy) NSString *certificateURLBagKey;
@property (copy) id /* block */ outputBlock;

- (id)_resolveCertificateURLReturningError:(id *)a0;
- (id)initWithConfiguration:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)initWithURLBag:(id)a0;
- (void)cancel;

@end
