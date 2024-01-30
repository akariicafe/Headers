@class HMCHIPHome, HMCHIPAccessoryPairing, NSString;
@protocol HFHomeKitObject;

@interface HUMatterConnectedHomeItem : HFItem <HFHomeKitItemProtocol>

@property (readonly, nonatomic) HMCHIPHome *connectedHome;
@property (readonly, nonatomic) HMCHIPAccessoryPairing *chipAccessoryPairing;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithConnectedHome:(id)a0 accessoryPairing:(id)a1;

@end
