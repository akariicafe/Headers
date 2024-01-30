@class HFRoomBuilder, NSString, NSArray, HMService, HFNamingComponents;
@protocol HFIconDescriptor;

@interface HFServiceBuilder : HFItemBuilder <HFServiceLikeBuilder, HFNamedItemBuilder>

@property (retain, nonatomic) HFNamingComponents *namingComponent;
@property (readonly, nonatomic) HMService *service;
@property (retain, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (copy, nonatomic) NSString *associatedServiceType;
@property (nonatomic) long long configurationState;
@property (copy, nonatomic) NSString *accessoryName;
@property (copy, nonatomic) NSString *name;
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
- (id)_performValidation;
- (void).cxx_destruct;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)commitItem;
- (id)_lazilyUpdateName;
- (id)_lazilyUpdateRoom;
- (id)_lazilyUpdateFavorite;
- (BOOL)_shouldUpdateNilNameWithRoomName;
- (id)removeItemFromHome;
- (id)_lazilyUpdateIcon;
- (id)_lazilyUpdateDateAdded;
- (id)_lazilyUpdateAssociatedServiceType;
- (id)_lazilyUpdateConfigurationState;

@end
