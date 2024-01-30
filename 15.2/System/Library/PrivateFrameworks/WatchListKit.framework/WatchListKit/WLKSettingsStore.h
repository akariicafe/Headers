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

+ (void)synchronizeSettingsDefaultsForKeys:(id)a0;
+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;
+ (id)sharedSettings;

- (id)deniedBrands;
- (id)watchListApps;
- (void)_readFromDisk;
- (id)_dictionaryRepresentation;
- (id)consentedBrands;
- (void)_activeAccountChangedNotification:(id)a0;
- (void)_attemptCullingOfObsoleteApp:(id)a0;
- (id)_supportPath;
- (id)_connection;
- (void)_writeToDisk;
- (id)_dictionaryRepresentationDataOnly;
- (void)_writeToDisk:(id)a0 completion:(id /* block */)a1;
- (id)watchListAppsFiltered;
- (id)_watchListAppsFiltered;
- (void)endIgnoringChanges;
- (id)description;
- (void)setLastSyncDate:(id)a0;
- (id)settingsForChannelID:(id)a0 externalID:(id)a1;
- (void).cxx_destruct;
- (void)beginIgnoringChanges;
- (id)init;
- (id)_dictionaryOnDisk;
- (void)forceUpdateWithCompletion:(id /* block */)a0;
- (void)_updateDisplayNamesForUI:(id /* block */)a0;
- (void)_removeWatchListApp:(id)a0;
- (BOOL)synchronize:(unsigned long long)a0;
- (void)refresh;
- (id)_appsForChannelID:(id)a0;
- (void)_dictionaryOnDisk:(id /* block */)a0;
- (void)dealloc;
- (void)_tickleKVO;
- (void)setName:(id)a0 forChannelID:(id)a1 externalID:(id)a2;
- (void)synchronize:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)_dictionaryRepresentationCopyingItems:(BOOL)a0;
- (void)setLastSyncToCloudDate:(id)a0;
- (void)setStatus:(unsigned long long)a0 forChannelID:(id)a1 externalID:(id)a2;

@end
