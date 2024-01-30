@class NSMutableArray, NSString, NSUserDefaults, NSXPCConnection, NSDate, NSNumber, NSObject;
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
    NSXPCConnection *_connection;
}

@property int ignoreChangesCount;
@property BOOL hasOutstandingChanges;
@property (nonatomic) BOOL privateModeEnabled;
@property (nonatomic) BOOL sportsScoreSpoilersAllowed;
@property (nonatomic) BOOL optedIn;
@property (copy, nonatomic) NSNumber *optedInVal;
@property (nonatomic) BOOL migratediOS;
@property (nonatomic) BOOL migratedtvOS;
@property (copy, nonatomic) NSString *pushToken;
@property (readonly, copy, nonatomic) NSDate *lastSyncDate;
@property (readonly, copy, nonatomic) NSDate *lastSyncToCloudDate;

+ (id)sharedSettings;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (void)synchronizeSettingsDefaultsForKeys:(id)a0;

- (BOOL)synchronize:(unsigned long long)a0;
- (void)refresh;
- (id)_watchListAppsFiltered;
- (id)init;
- (id)settingsForChannelID:(id)a0 externalID:(id)a1;
- (void).cxx_destruct;
- (id)_supportPath;
- (void)dealloc;
- (id)consentedBrands;
- (void)beginIgnoringChanges;
- (id)_dictionaryRepresentationCopyingItems:(BOOL)a0;
- (void)forceUpdateWithCompletion:(id /* block */)a0;
- (id)_dictionaryOnDisk;
- (void)setLastSyncDate:(id)a0;
- (void)endIgnoringChanges;
- (id)_appsForChannelID:(id)a0;
- (void)_dictionaryOnDisk:(id /* block */)a0;
- (id)_dictionaryRepresentationDataOnly;
- (id)description;
- (void)_updateDisplayNamesForUI:(id /* block */)a0;
- (void)_readFromDisk;
- (void)_writeToDisk;
- (id)_connection;
- (id)watchListAppsFiltered;
- (id)watchListApps;
- (void)_removeWatchListApp:(id)a0;
- (void)synchronize:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_writeToDisk:(id)a0 completion:(id /* block */)a1;
- (void)setStatus:(unsigned long long)a0 forChannelID:(id)a1 externalID:(id)a2;
- (id)deniedBrands;
- (void)_tickleKVO;
- (void)setLastSyncToCloudDate:(id)a0;
- (void)_activeAccountChangedNotification:(id)a0;
- (void)setName:(id)a0 forChannelID:(id)a1 externalID:(id)a2;
- (id)_dictionaryRepresentation;
- (void)_attemptCullingOfObsoleteApp:(id)a0;

@end
