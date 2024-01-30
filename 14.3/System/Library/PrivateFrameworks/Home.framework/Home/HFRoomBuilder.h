@class HMRoom, HFWallpaperEditCollectionBuilder, HFMutableSetDiff, NSString, NSSet;

@interface HFRoomBuilder : HFItemBuilder <HFNamedItemBuilder>

@property (retain, nonatomic) HFWallpaperEditCollectionBuilder *wallpaperBuilder;
@property (retain, nonatomic) HFMutableSetDiff *accessoryUUIDs;
@property (readonly, nonatomic) HMRoom *room;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSSet *accessories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)homeKitRepresentationClass;

- (id)_performValidation;
- (void).cxx_destruct;
- (void)removeAccessory:(id)a0;
- (void)addAccessory:(id)a0;
- (void)setRoom:(id)a0;
- (id)commitItem;
- (BOOL)isEqual:(id)a0;
- (id)_updateName;
- (id)_updateAccessories;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)_createRoom;

@end
