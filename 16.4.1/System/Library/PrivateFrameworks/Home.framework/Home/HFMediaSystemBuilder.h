@class HMUser, NSString, HFNamingComponents, HMMediaSystem, HMMediaSystemBuilder, HFRoomBuilder, HFAppleMusicAccountArbitrator, HMAccessory, NSArray, NSSet;
@protocol HFIconDescriptor;

@interface HFMediaSystemBuilder : HFItemBuilder <HFServiceLikeBuilder, HFMediaAccountArbitratingBuilderProtocol>

@property (retain, nonatomic) HMMediaSystemBuilder *homeKitMediaSystemBuilder;
@property (retain, nonatomic) HFNamingComponents *namingComponent;
@property (retain, nonatomic) HFRoomBuilder *roomBuilder;
@property (nonatomic) BOOL hasSetRoom;
@property (nonatomic) BOOL isCreatingMediaSystem;
@property (readonly, nonatomic) HMMediaSystem *mediaSystem;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HFAppleMusicAccountArbitrator *accountArbitrator;
@property (retain, nonatomic) HMUser *preferredMediaUser;
@property (readonly, nonatomic) HMAccessory *firstSetupSourceAccessory;
@property (readonly, nonatomic) NSString *originalName;
@property (readonly, nonatomic) BOOL supportsFavoriting;
@property (retain, nonatomic) HFRoomBuilder *room;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) BOOL showInHomeDashboard;
@property (retain, nonatomic) id<HFIconDescriptor> iconDescriptor;
@property (readonly, nonatomic) NSArray *availableIconDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *accessories;

+ (Class)homeKitRepresentationClass;

- (void)addAccessory:(id)a0;
- (void)setName:(id)a0;
- (void)removeAccessory:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (void)setMediaSystem:(id)a0;
- (id)_defaultName;
- (id)accessoryForRole:(id)a0;
- (id)commitItem;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)removeItemFromHome;
- (BOOL)shouldAllowAddingAccessory:(id)a0;
- (BOOL)stereoPairVersionMatchesForAccessory:(id)a0;
- (BOOL)swapRoles;
- (id)_rooms;
- (id)_arbitrateMusicAccount;
- (id)_commitChangesToMediaSystemBuilder;
- (id)_firstUnpopulatedRole;
- (id)_setHomeTheaterSource:(id)a0 toDestination:(id)a1;
- (id)_updateAssistantAccessControl;
- (id)_updateAudioAnalysisSoundNotificationSettings;
- (id)_updatePreferredMediaUser;
- (id)_updateRoom;
- (id)_updateSiriLanguageOptionsManager;
- (id)_updateValueForContextType:(unsigned long long)a0;
- (void)addAccessory:(id)a0 role:(id)a1;
- (id)roleForAccessory:(id)a0;

@end
