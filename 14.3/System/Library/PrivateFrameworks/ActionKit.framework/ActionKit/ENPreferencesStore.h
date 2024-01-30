@class NSString, NSMutableDictionary;

@interface ENPreferencesStore : NSObject

@property (retain, nonatomic) NSString *pathname;
@property (retain, nonatomic) NSMutableDictionary *store;

+ (id)pathnameForStoreFilename:(id)a0;
+ (id)preferenceStoreWithSecurityApplicationGroupIdentifier:(id)a0;
+ (id)defaultPreferenceStore;

- (id)objectForKey:(id)a0;
- (void)load;
- (id)init;
- (void).cxx_destruct;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)save;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithURL:(id)a0;
- (void)removeAllItems;
- (id)initWithStoreFilename:(id)a0;
- (id)decodedObjectForKey:(id)a0;

@end
