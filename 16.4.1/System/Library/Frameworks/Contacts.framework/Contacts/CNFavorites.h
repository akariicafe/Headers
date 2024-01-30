@class CNContactStore, NSMutableDictionary, NSArray;
@protocol CNFavoritesLogger;

@interface CNFavorites : NSObject {
    NSArray *_entries;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSMutableDictionary *uidToEntry;
@property (nonatomic) BOOL dirty;
@property (nonatomic) unsigned long long postCount;
@property (nonatomic) BOOL needsReload;
@property (readonly, nonatomic) id<CNFavoritesLogger> logger;
@property (readonly, copy, nonatomic) NSArray *entries;
@property (readonly, getter=isFull) BOOL full;

+ (id)sharedInstance;
+ (id)favoritesPath;
+ (void)flushSingleton;

- (id)initWithContactStore:(id)a0;
- (id)entriesForContact:(id)a0;
- (void)removeAllEntries;
- (BOOL)_isValueForEntry:(id)a0 equalToValue:(id)a1;
- (void)rematchEntriesWithOptions:(unsigned long long)a0;
- (void)_removeEntryFromMap:(id)a0 withUid:(int)a1;
- (void)loadEntriesIfNecessary;
- (void)removeEntryAtIndex:(long long)a0;
- (id)_entryDictionaries;
- (void)save;
- (BOOL)shouldSimulateCrashReportForError:(id)a0;
- (id)entryWithType:(long long)a0 forContact:(id)a1 propertyKey:(id)a2 identifier:(id)a3;
- (BOOL)addEntryForContact:(id)a0 propertyKey:(id)a1 withIdentifier:(id)a2;
- (void)dealloc;
- (void)unregisterForDistributedNotifications;
- (id)entriesForContact:(id)a0 propertyKey:(id)a1 labeledValueIdentifier:(id)a2 actionType:(id)a3 bundleIdentifier:(id)a4;
- (void)_addEntryToMap:(id)a0;
- (void)saveImmediately;
- (id)init;
- (void)addEntry:(id)a0;
- (void)_entriesChangedExternally;
- (id)_uniqueRematchedEntries:(id)a0;
- (id)initWithContactStore:(id)a0 logger:(id)a1;
- (void)recacheIdentitiesSoon;
- (BOOL)containsEntryWithType:(long long)a0 forContact:(id)a1 propertyKey:(id)a2 identifier:(id)a3;
- (void).cxx_destruct;
- (id)entryWithIdentifier:(id)a0 forContact:(id)a1;
- (BOOL)writeFavoritesToFile:(id)a0;
- (id)initNonUpdatingReadonlyInstanceWithContactStore:(id)a0;
- (void)moveEntryAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)registerForDistributedNotifications;
- (void)_postChangeNotification;

@end
