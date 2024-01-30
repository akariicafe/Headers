@class HFRoomBuilder, NSString, NSArray, HFMutableSetDiff, HMServiceGroup;
@protocol HFIconDescriptor;

@interface HFServiceGroupBuilder : HFItemBuilder <HFServiceLikeBuilder>

@property (readonly, nonatomic) HFMutableSetDiff *serviceUUIDs;
@property (retain, nonatomic) HFRoomBuilder *roomBuilder;
@property (nonatomic) BOOL hasSetRoom;
@property (nonatomic) BOOL hasSetIcon;
@property (readonly, nonatomic) HMServiceGroup *serviceGroup;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *services;
@property (readonly, nonatomic) NSString *primaryServiceType;
@property (retain, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (readonly, nonatomic) NSString *originalName;
@property (readonly, nonatomic) BOOL supportsFavoriting;
@property (retain, nonatomic) HFRoomBuilder *room;
@property (nonatomic) BOOL isFavorite;
@property (readonly, nonatomic) NSArray *availableIconDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)homeKitRepresentationClass;

- (id)accessories;
- (void)addService:(id)a0;
- (id)_performValidation;
- (void)removeService:(id)a0;
- (id)_rooms;
- (void).cxx_destruct;
- (id)_updateName;
- (void)setServiceGroup:(id)a0;
- (id)_updateIcon;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)commitItem;
- (id)removeItemFromHome;
- (id)_updateFavorite;
- (BOOL)shouldAllowAddingService:(id)a0;
- (id)_createServiceGroup;
- (id)_updateRooms;
- (id)_updateServices;
- (id)_mostCommonIconDescriptor;
- (BOOL)_supportsCustomIcons;

@end
