@class NSArray, _TtC8FMClient7Session, NSString;

@interface FMIPSiriDeviceSearch : NSObject

@property (retain, nonatomic) NSArray *searchDevices;
@property (retain, nonatomic) _TtC8FMClient7Session *clientSession;
@property (retain, nonatomic) NSArray *deviceSearchQueries;
@property (nonatomic) BOOL deviceUnlocked;
@property (retain, nonatomic) NSString *ownerDsid;

+ (unsigned long long)asyncTimeout;
+ (long long)responseCodeForResultCode:(long long)a0;

- (void).cxx_destruct;
- (void)_searchWithCompletion:(id /* block */)a0;
- (void)scanRequiredWithCompletion:(id /* block */)a0;
- (id)potentialPlaybackDevices:(id)a0 discoveredDevices:(id)a1 didScan:(BOOL)a2;
- (id)isOwnerDevice:(id)a0;
- (BOOL)canPlaySoundOnTargetDiscoveryId:(id)a0 pairedDiscoveryIds:(id)a1 nearbyDiscoverIds:(id)a2;
- (id)deviceLocalityWithTargetDiscoveryId:(id)a0 nearbyDiscoverIds:(id)a1 didScan:(BOOL)a2;
- (id)ownerDsidForDevice:(id)a0;
- (id)initWithSession:(id)a0 deviceSearchQueries:(id)a1 deviceUnlocked:(BOOL)a2 ownerDsid:(id)a3;
- (void)searchWithCompletion:(id /* block */)a0;

@end
