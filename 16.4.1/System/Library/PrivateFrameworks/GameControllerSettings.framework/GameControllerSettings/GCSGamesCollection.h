@class NSArray, GCSGame;
@protocol GCUserDefaults, GCSSettingsStoreService;

@interface GCSGamesCollection : NSObject <GCSGames> {
    id<GCUserDefaults> _userDefaults;
    GCSGame *_defaultGame;
}

@property (retain, nonatomic) NSArray *values;
@property (readonly, weak, nonatomic) id<GCSSettingsStoreService> settingsStore;

- (BOOL)storeVersionIsCompatible;
- (id)gameForPersistentControllerIdentifier:(id)a0 appBundleIdentifier:(id)a1;
- (void)dealloc;
- (id)initWithSettingsStore:(id)a0 userDefaults:(id)a1;
- (void)updateGames:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
