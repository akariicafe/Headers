@class SSSQLiteDatabase;

@interface SSKeyValueStoreSession : NSObject

@property (readonly, nonatomic) SSSQLiteDatabase *database;

- (id)initWithDatabase:(id)a0;
- (id)copyValueForDomain:(id)a0 key:(id)a1;
- (id)copyAccountDictionaryForDomain:(id)a0;
- (id)copyDataForDomain:(id)a0 key:(id)a1;
- (id)existingEntityForDomain:(id)a0 key:(id)a1;
- (void)dealloc;
- (id)iTunesValueForKey:(id)a0 usedDomain:(id *)a1;

@end
