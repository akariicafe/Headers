@class SSURLBag, NSString, SSVPlaybackLeaseRequest, NSData, NSObject, SSVPlaybackLeaseConfiguration;
@protocol OS_dispatch_semaphore;

@interface SSVLeaseRequestOperation : SSVOperation {
    NSObject<OS_dispatch_semaphore> *_bagLoadSemaphore;
    NSString *_bagKey;
    NSData *_certificateData;
    NSString *_certificateURLBagKey;
    SSVPlaybackLeaseConfiguration *_configuration;
    id /* block */ _outputBlock;
    SSVPlaybackLeaseRequest *_request;
    unsigned long long _retryCount;
    SSURLBag *_urlBag;
}

@property (copy) NSString *certificateURLBagKey;
@property (readonly, copy) SSVPlaybackLeaseRequest *leaseRequest;
@property (copy) id /* block */ outputBlock;

- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (BOOL)_loadCertificateDataIfNecessary:(id *)a0;
- (BOOL)_resolveConfigurationAndURLReturningError:(id *)a0;
- (BOOL)_shouldRetryForError:(id)a0;
- (id)initWithLeaseRequest:(id)a0 URLBag:(id)a1;
- (id)initWithLeaseRequest:(id)a0 configuration:(id)a1;

@end
