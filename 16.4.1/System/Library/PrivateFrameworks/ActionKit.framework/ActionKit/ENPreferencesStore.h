@class NSString, NSMutableDictionary;

@interface ENPreferencesStore : NSObject

@property (retain, nonatomic) NSString *pathname;
@property (retain, nonatomic) NSMutableDictionary *store;

+ (id)defaultPreferenceStore;
+ (id)pathnameForStoreFilename:(id)a0;
+ (id)preferenceStoreWithSecurityApplicationGroupIdentifier:(id)a0;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithURL:(id)a0;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)load;
- (id)objectForKey:(id)a0;
- (void)save;
- (void)removeAllItems;
- (id)init;
- (void).cxx_destruct;
- (id)decodedObjectForKey:(id)a0;
- (id)initWithStoreFilename:(id)a0;

@end
