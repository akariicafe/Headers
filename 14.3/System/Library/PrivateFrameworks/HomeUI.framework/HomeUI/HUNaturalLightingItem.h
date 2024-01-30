@class NSSet, NSString, HMRoom;
@protocol HFHomeKitObject;

@interface HUNaturalLightingItem : HFTransformItem <HFHomeKitItemProtocol, HFRoomContextProviding>

@property (nonatomic) BOOL selected;
@property (readonly, nonatomic) NSSet *lightProfiles;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HMRoom *hf_parentRoom;

- (id)accessory;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithSourceItem:(id)a0 defaultSelected:(BOOL)a1;

@end
