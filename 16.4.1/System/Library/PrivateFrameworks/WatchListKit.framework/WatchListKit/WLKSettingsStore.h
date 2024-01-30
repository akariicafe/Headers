@class NSDate, NSString, NSXPCConnection, NSSet, NSMutableArray, NSObject, NSUserDefaults, NSNumber;
@protocol OS_dispatch_queue;

@interface WLKSettingsStore : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    NSString *_pushToken;
    NSString *_accountID;
    BOOL _optedIn;
    BOOL _migratediOS;
    BOOL _migratedtvOS;
    NSMutableArray *_apps;
    NSUserDefaults *_defaultsAccessor;
    int _didChangeNotificationToken;
    int _userDefaultsDidChangeNotificationToken;
    NSXPCConnection *_connection;
}

@property int ignoreChangesCount;
@property BOOL hasOutstandingChanges;
@property (nonatomic) BOOL privateModeEnabled;
@property (nonatomic) BOOL sportsScoreSpoilersAllowed;
@property (nonatomic) BOOL upNextLockupsUseCoverArt;
@property (readonly, copy, nonatomic) NSSet *suppressedSportsEventIDs;
@property (nonatomic) BOOL optedIn;
@property (copy, nonatomic) NSNumber *optedInVal;
@property (nonatomic) BOOL migratediOS;
@property (nonatomic) BOOL migratedtvOS;
@property (copy, nonatomic) NSString *pushToken;
@property (readonly, copy, nonatomic) NSDate *lastSyncDate;
@property (readonly, copy, nonatomic) NSDate *lastSyncToCloudDate;

+ (void)synchronizeSettingsDefaultsForKeys:(id)a0;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)sharedSettings;

- (void)refresh;
- (id)settingsForChannelID:(id)a0 externalID:(id)a1;
- (void)setLastSyncDate:(id)a0;
- (void)_writeToDisk;
- (id)watchListApps;
- (id)_dictionaryRepresentationDataOnly;
- (void)_activeAccountChangedNotification:(id)a0;
- (void)endIgnoringChanges;
- (void)setLastSyncToCloudDate:(id)a0;
- (id)_dictionaryRepresentation;
- (id)consentedBrands;
- (id)_dictionaryRepresentationCopyingItems:(BOOL)a0;
- (void)_readFromDisk;
- (void)_writeToDisk:(id)a0 completion:(id /* block */)a1;
- (void)_removeWatchListApp:(id)a0;
- (id)_appsForChannelID:(id)a0;
- (void)setSportsNotificationSuppression:(BOOL)a0 forEventID:(id)a1;
- (void)forceUpdateWithCompletion:(id /* block */)a0;
- (id)_supportPath;
- (id)_dictionaryOnDisk;
- (void)clearAllSportsNotificationSuppression;
- (id)_watchListAppsFiltered;
- (void)synchronize:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_updateDisplayNamesForUI:(id /* block */)a0;
- (void)setStatus:(unsigned long long)a0 forChannelID:(id)a1 externalID:(id)a2;
- (void)_attemptCullingOfObsoleteApp:(id)a0;
- (void)dealloc;
- (void)beginIgnoringChanges;
- (BOOL)synchronize:(unsigned long long)a0;
- (void)_tickleKVO;
- (id)deniedBrands;
- (void)_dictionaryOnDisk:(id /* block */)a0;
- (id)init;
- (id)description;
- (void)setName:(id)a0 forChannelID:(id)a1 externalID:(id)a2;
- (id)watchListAppsFiltered;
- (id)_connection;
- (void).cxx_destruct;

@end
