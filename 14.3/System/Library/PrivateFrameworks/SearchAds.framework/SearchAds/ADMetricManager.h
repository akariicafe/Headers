@class NSString, ADCapService, NSMutableDictionary, ADUnfairLock, NSMutableSet;

@interface ADMetricManager : NSObject

@property (retain, nonatomic) ADCapService *capService;
@property (readonly, nonatomic) ADUnfairLock *resourceLock;
@property (retain, nonatomic) NSString *searchRequestID;
@property (retain, nonatomic) NSMutableDictionary *activeAdvertisementsByInstanceID;
@property (retain, nonatomic) NSMutableSet *clickCapUpdated;
@property (retain, nonatomic) NSMutableSet *downloadCapUpdated;
@property (retain, nonatomic) NSMutableSet *frequencyCapUpdated;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)placed:(id)a0;
- (void)interacted:(id)a0;
- (long long)translateButtonStateToDownloadType:(long long)a0;
- (void)deactivateAdvertisementsByInstanceIDs:(id)a0;
- (void)addAdRecordsToDES:(id)a0 forSearchRequestID:(id)a1 listType:(long long)a2;
- (id)createRecordForAdData:(id)a0;
- (void)onScreen:(id)a0;
- (void)offScreen:(id)a0;
- (void)visible:(id)a0 start:(id)a1 duration:(double)a2;
- (void)adMarkerInteracted:(id)a0;
- (void)getApp:(id)a0 buttonState:(long long)a1 completion:(id /* block */)a2;
- (void)completed:(id)a0;
- (void)received:(id)a0;
- (void)activateAdvertisements:(id)a0;
- (void)deactivateAdvertisements:(id)a0;
- (void)deactivateAllAdvertisements;
- (void)replaceCapService:(id)a0;
- (void)addOriginalAdRecordsToDES:(id)a0 forSearchRequestID:(id)a1;
- (void)addRerankedAdRecordsToDES:(id)a0 forSearchRequestID:(id)a1;
- (void)updateDESRecord:(id)a0 forEvent:(long long)a1 forType:(long long)a2;

@end
