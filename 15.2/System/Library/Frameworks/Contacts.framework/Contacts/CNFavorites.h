@class CNContactStore, NSMutableDictionary, NSUUID, NSArray, NSMutableArray;
@protocol CNFavoritesLogger;

@interface CNFavorites : NSObject {
    NSMutableArray *_entries;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSMutableDictionary *uidToEntry;
@property (nonatomic) BOOL dirty;
@property (nonatomic) unsigned long long postCount;
@property (nonatomic) BOOL needsReload;
@property (readonly, nonatomic) id<CNFavoritesLogger> logger;
@property (readonly, nonatomic) NSUUID *favoritesRegistrationKey;
@property (readonly, nonatomic) NSArray *entries;
@property (readonly, getter=isFull) BOOL full;

+ (id)sharedInstance;
+ (id)registeredFavorites;
+ (void)flushSingleton;
+ (id)favoritesPath;

- (void)save;
- (void)recacheIdentitiesSoon;
- (void)addEntry:(id)a0;
- (void)registerForDistributedNotifications;
- (BOOL)_isValueForEntry:(id)a0 equalToValue:(id)a1;
- (void)_removeEntryFromMap:(id)a0 withUid:(int)a1;
- (BOOL)writeFavoritesToFile:(id)a0;
- (void)unregisterForDistributedNotifications;
- (void)removeAllEntries;
- (id)initWithContactStore:(id)a0 logger:(id)a1;
- (void)loadEntriesIfNecessary;
- (id)entryWithType:(long long)a0 forContact:(id)a1 propertyKey:(id)a2 identifier:(id)a3;
- (id)_uniqueRematchedEntries:(id)a0;
- (void)moveEntryAtIndex:(long long)a0 toIndex:(long long)a1;
- (id)entryWithIdentifier:(id)a0 forContact:(id)a1;
- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (id)init;
- (void)_postChangeNotification;
- (id)entriesForContact:(id)a0 propertyKey:(id)a1 labeledValueIdentifier:(id)a2 actionType:(id)a3 bundleIdentifier:(id)a4;
- (void)_entriesChangedExternally;
- (void)rematchEntriesWithOptions:(unsigned long long)a0;
- (BOOL)addEntryForContact:(id)a0 propertyKey:(id)a1 withIdentifier:(id)a2;
- (BOOL)containsEntryWithType:(long long)a0 forContact:(id)a1 propertyKey:(id)a2 identifier:(id)a3;
- (id)initNonUpdatingReadonlyInstanceWithContactStore:(id)a0;
- (id)entriesForContact:(id)a0;
- (void)saveImmediately;
- (BOOL)shouldSimulateCrashReportForError:(id)a0;
- (void)dealloc;
- (void)_addEntryToMap:(id)a0;
- (void)removeEntryAtIndex:(long long)a0;
- (id)_entryDictionaries;

@end
