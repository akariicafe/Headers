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
- (void)addAccessory:(id)a0;
- (void)removeAccessory:(id)a0;
- (void)setRoom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_updateAccessories;
- (id)_updateName;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)commitItem;
- (id)_createRoom;

@end
