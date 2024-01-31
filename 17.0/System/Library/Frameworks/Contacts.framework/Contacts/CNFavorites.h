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

- (void)unregisterForDistributedNotifications;
- (BOOL)addEntryForContact:(id)a0 propertyKey:(id)a1 withIdentifier:(id)a2;
- (BOOL)shouldSimulateCrashReportForError:(id)a0;
- (BOOL)_isValueForEntry:(id)a0 equalToValue:(id)a1;
- (void)moveEntryAtIndex:(long long)a0 toIndex:(long long)a1;
- (id)init;
- (void)removeAllEntries;
- (void)dealloc;
- (BOOL)writeFavoritesToFile:(id)a0;
- (void)addEntry:(id)a0;
- (void)loadEntriesIfNecessary;
- (void)_addEntryToMap:(id)a0;
- (id)entriesForContact:(id)a0;
- (id)initWithContactStore:(id)a0;
- (void)registerForDistributedNotifications;
- (void)recacheIdentitiesSoon;
- (id)_entryDictionaries;
- (void)removeEntryAtIndex:(long long)a0;
- (id)initWithContactStore:(id)a0 logger:(id)a1;
- (void)save;
- (void).cxx_destruct;
- (BOOL)containsEntryWithType:(long long)a0 forContact:(id)a1 propertyKey:(id)a2 identifier:(id)a3;
- (id)entriesForContact:(id)a0 propertyKey:(id)a1 labeledValueIdentifier:(id)a2 actionType:(id)a3 bundleIdentifier:(id)a4;
- (void)_entriesChangedExternally;
- (void)rematchEntriesWithOptions:(unsigned long long)a0;
- (void)_postChangeNotification;
- (void)_removeEntryFromMap:(id)a0 withUid:(int)a1;
- (id)initNonUpdatingReadonlyInstanceWithContactStore:(id)a0;
- (void)saveImmediately;
- (id)entryWithIdentifier:(id)a0 forContact:(id)a1;
- (id)_uniqueRematchedEntries:(id)a0;
- (id)entryWithType:(long long)a0 forContact:(id)a1 propertyKey:(id)a2 identifier:(id)a3;

@end
