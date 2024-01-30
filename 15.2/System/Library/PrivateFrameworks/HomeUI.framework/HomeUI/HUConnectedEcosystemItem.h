@class HMCHIPHome, NSString, HMCHIPAccessoryPairing, NSNumber;
@protocol HFHomeKitObject;

@interface HUConnectedEcosystemItem : HFItem <HFHomeKitItemProtocol>

@property (retain, nonatomic) NSNumber *accessoryInHomeCount;
@property (readonly, nonatomic) HMCHIPHome *connectedEcosystemHome;
@property (readonly, nonatomic) HMCHIPAccessoryPairing *chipAccessoryParing;
@property (readonly, nonatomic) BOOL removalMode;
@property (nonatomic) BOOL isAppleHome;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithConnectedEcosystemHome:(id)a0 removalMode:(BOOL)a1 accessoryPairing:(id)a2;
- (id)initWithConnectedEcosystemHome:(id)a0 removalMode:(BOOL)a1 accessoryInHomeCount:(id)a2;
- (id)initWithConnectedEcosystemHome:(id)a0 accessoryPairing:(id)a1 removalMode:(BOOL)a2 accessoryInHomeCount:(id)a3;

@end
