@class NSString, CLLocation;

@interface RESharedLocationRelevanceProviderManager : RERelevanceProviderManager <REEngineLocationManagerObserver, RESharedLocationRelevanceProviderManagerProperties> {
    CLLocation *_lastLocationUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CLLocation *currentLocation;

+ (BOOL)_wantsSeperateRelevanceQueue;

- (void).cxx_destruct;
- (void)pause;
- (void)resume;
- (void)_queue_loadLocation:(id)a0;
- (void)locationManagerDidUpdateLocation:(id)a0;

@end
