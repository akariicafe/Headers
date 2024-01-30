@class NSSet, NSMapTable, HMRoom, HFAccessoryType, NSString, HFServiceNameComponents;
@protocol HFAccessoryLikeObjectRootHomeKitObjectProvider, HFFavoritable, HFHomeKitObject, HFIncludedContextProtocol, HFShowInHomeDashboard, HFAccessoryRepresentable;

@interface HFAccessoryLikeObject : NSObject <HFFavoritable, HFShowInHomeDashboard, HFServiceNameComponentsProviding, HFAccessoryRepresentable>

@property (class, readonly, nonatomic) NSMapTable *objectMap;

@property (readonly, weak, nonatomic) id<HFAccessoryLikeObjectRootHomeKitObjectProvider, HFAccessoryRepresentable, HFFavoritable, HFShowInHomeDashboard, HFIncludedContextProtocol> dataSource;
@property (readonly, weak, nonatomic) id<HFHomeKitObject, HFAccessoryRepresentable> homeKitObject;
@property (readonly, nonatomic) NSSet *services;
@property (readonly, nonatomic) NSSet *profiles;
@property (readonly, nonatomic) NSSet *accessories;
@property (readonly, nonatomic) HMRoom *room;
@property (readonly, nonatomic) HFAccessoryType *accessoryType;
@property (readonly, nonatomic) BOOL hf_isFavorite;
@property (readonly, nonatomic) BOOL hf_hasSetFavorite;
@property (readonly, nonatomic) BOOL hf_shouldShowInFavorites;
@property (readonly, nonatomic) BOOL hf_effectiveIsFavorite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hf_showInHomeDashboard;
@property (readonly, nonatomic) BOOL hf_hasSetShowInHomeDashboard;
@property (readonly, nonatomic) BOOL hf_effectiveShowInHomeDashboard;
@property (readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property (readonly, nonatomic) id<HFHomeKitObject> hf_homeKitObject;
@property (readonly, nonatomic) Class hf_itemClass;
@property (readonly, nonatomic) HFAccessoryType *hf_accessoryType;
@property (readonly, nonatomic) HMRoom *hf_safeRoom;
@property (readonly, nonatomic) BOOL hf_canSpanMultipleRooms;
@property (readonly, nonatomic) NSSet *hf_containedCharacteristics;
@property (readonly, nonatomic) NSSet *hf_containedServices;
@property (readonly, nonatomic) NSSet *hf_containedProfiles;
@property (readonly, nonatomic) NSSet *hf_associatedAccessories;
@property (readonly, nonatomic) BOOL hf_supportsHomeStatus;
@property (readonly, nonatomic) BOOL hf_isVisibleInHomeStatus;
@property (readonly, nonatomic) BOOL hf_hasSetVisibleInHomeStatus;
@property (readonly, nonatomic) BOOL hf_isForcedVisibleInHomeStatus;
@property (readonly, nonatomic) NSString *hf_tileSize;

+ (id)accessoryLikeObjectsForAccessoryRepresentable:(id)a0;
+ (id)_accessoryLikeObjectForObject:(id)a0;
+ (void)_invalidateObjectMap;

- (void).cxx_destruct;
- (Class)itemClass;
- (id)hf_updateIsVisibleInHomeStatus:(BOOL)a0;
- (id)hf_setTileSize:(id)a0;
- (BOOL)hf_isInRoom:(id)a0;
- (id)hf_moveToRoom:(id)a0;
- (id)hf_parentRoom;
- (id)hf_updateIsFavorite:(BOOL)a0;
- (id)hf_updateShowInHomeDashboard:(BOOL)a0;
- (id)initWithHomeKitObject:(id)a0;
- (id)hf_representableAccessoryLikeObject;

@end
