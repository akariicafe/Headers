@class CNContactStore, NSMutableDictionary, NSArray, NSMutableArray;
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
@property (readonly, nonatomic) NSArray *entries;
@property (readonly, getter=isFull) BOOL full;

+ (id)sharedInstance;
+ (void)flushSingleton;
+ (id)favoritesPath;

- (void)removeAllEntries;
- (id)init;
- (void).cxx_destruct;
- (void)save;
- (void)dealloc;
- (void)moveEntryAtIndex:(long long)a0 toIndex:(long long)a1;
- (id)entriesForContact:(id)a0;
- (id)initWithContactStore:(id)a0 logger:(id)a1;
- (void)_addEntryToMap:(id)a0;
- (BOOL)shouldSimulateCrashReportForError:(id)a0;
- (id)_entryDictionaries;
- (void)loadEntriesIfNecessary;
- (BOOL)writeFavoritesToFile:(id)a0;
- (void)_removeEntryFromMap:(id)a0 withUid:(int)a1;
- (id)_uniqueRematchedEntries:(id)a0;
- (BOOL)_isValueForEntry:(id)a0 equalToValue:(id)a1;
- (id)initNonUpdatingReadonlyInstanceWithContactStore:(id)a0;
- (id)entryWithIdentifier:(id)a0 forContact:(id)a1;
- (id)entryWithType:(long long)a0 forContact:(id)a1 propertyKey:(id)a2 identifier:(id)a3;
- (void)removeEntryAtIndex:(long long)a0;
- (void)saveImmediately;
- (BOOL)containsEntryWithType:(long long)a0 forContact:(id)a1 propertyKey:(id)a2 identifier:(id)a3;
- (void)_entriesChangedExternally;
- (BOOL)addEntryForContact:(id)a0 propertyKey:(id)a1 withIdentifier:(id)a2;
- (void)rematchEntriesWithOptions:(unsigned long long)a0;
- (void)recacheIdentitiesSoon;
- (void)_postChangeNotification;
- (id)entriesForContact:(id)a0 propertyKey:(id)a1 labeledValueIdentifier:(id)a2 actionType:(id)a3 bundleIdentifier:(id)a4;
- (id)initWithContactStore:(id)a0;
- (void)addEntry:(id)a0;

@end
