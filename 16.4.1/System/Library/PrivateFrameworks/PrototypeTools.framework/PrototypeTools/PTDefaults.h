@class NSString;

@interface PTDefaults : BSAbstractDefaultDomain

@property (retain, nonatomic) NSString *testRecipeIdentifier;
@property (retain, nonatomic) NSString *testRecipeDescription;
@property (nonatomic) BOOL testRecipeEatsVolumeUp;
@property (nonatomic) BOOL testRecipeEatsVolumeDown;
@property (nonatomic) BOOL testRecipeEatsRingerSwitch;
@property (nonatomic) BOOL shouldClearSettingsArchivesForMigration;
@property (nonatomic) BOOL shouldClearPrototypeCachesForMigration;
@property (nonatomic) BOOL ringerSwitchShowsUI;
@property (nonatomic) BOOL volumeUpShowsUI;
@property (nonatomic) BOOL volumeDownShowsUI;
@property (nonatomic) BOOL prototypeSettingsEnabled;
@property (nonatomic) BOOL activePrototypingEnabled;
@property (nonatomic) BOOL remotePrototypingEnabled;

+ (id)sharedInstance;

- (void)_bindAndRegisterDefaults;
- (id)_eventDefaults;
- (BOOL)_eventShowsUI:(long long)a0;
- (id)_testRecipeDefaults;
- (id)activeTestRecipeDescription;
- (BOOL)activeTestRecipeEatsEvent:(long long)a0;
- (id)activeTestRecipeEventDescription;
- (id)activeTestRecipeIdentifier;
- (BOOL)canEditShowsUIForEvent:(long long)a0;
- (void)deactivateTestRecipe;
- (BOOL)displayedShowsUIValueForEvent:(long long)a0;
- (id)observeEventDefaultsOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (id)observeShowUISwitchDefaultsOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (id)observeTestRecipeDefaultsOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)prototypingServerWantsEvent:(long long)a0;
- (void)setShowsUI:(BOOL)a0 forEvent:(long long)a1;
- (BOOL)testRecipeIsActive;

@end
