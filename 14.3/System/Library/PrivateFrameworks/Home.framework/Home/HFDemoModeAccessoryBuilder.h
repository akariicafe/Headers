@class NSString, NSArray, HMAccessory, HFNamingComponents, HFRoomBuilder;
@protocol HFIconDescriptor;

@interface HFDemoModeAccessoryBuilder : HFItemBuilder <HFServiceLikeBuilder>

@property (retain, nonatomic) HFNamingComponents *namingComponent;
@property (readonly, nonatomic) HMAccessory *accessory;
@property (readonly, nonatomic) NSString *originalName;
@property (readonly, nonatomic) BOOL supportsFavoriting;
@property (retain, nonatomic) HFRoomBuilder *room;
@property (nonatomic) BOOL isFavorite;
@property (retain, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (readonly, nonatomic) NSArray *availableIconDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;

+ (Class)homeKitRepresentationClass;

- (id)_performValidation;
- (void).cxx_destruct;
- (id)accessories;
- (id)commitItem;
- (id)_lazilyUpdateName;
- (id)_lazilyUpdateRoom;
- (id)_lazilyUpdateFavorite;
- (id)removeItemFromHome;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;

@end
