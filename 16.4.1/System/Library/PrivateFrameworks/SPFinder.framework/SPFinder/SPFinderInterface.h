@class SPAdvertisementCache;

@interface SPFinderInterface : NSObject

@property (retain, nonatomic) SPAdvertisementCache *advertisementCache;

- (id)beaconPayloadCache;
- (id)finderStateManager;
- (id)stateManager;
- (void).cxx_destruct;

@end
