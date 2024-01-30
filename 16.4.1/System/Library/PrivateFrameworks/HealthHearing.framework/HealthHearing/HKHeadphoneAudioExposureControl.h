@class NSString, HKProxyProvider;

@interface HKHeadphoneAudioExposureControl : NSObject <_HKXPCExportable, HKHeadphoneAudioExposureControlClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (id)exportedInterface;
- (void).cxx_destruct;
- (void)fetchDoseLimitInfoWithCompletion:(id /* block */)a0;
- (void)fetchInfoWithCompletion:(id /* block */)a0;
- (void)insertQuantityWithExposure:(double)a0 duration:(double)a1 startDate:(id)a2 includesNotificationSample:(BOOL)a3 synced:(BOOL)a4 completion:(id /* block */)a5;
- (void)overrideDoseLimit:(id)a0 completion:(id /* block */)a1;
- (void)rebuildWithCompletion:(id /* block */)a0;

@end
