@class NSString, NSMutableDictionary;

@interface ENPreferencesStore : NSObject

@property (retain, nonatomic) NSString *pathname;
@property (retain, nonatomic) NSMutableDictionary *store;

+ (id)pathnameForStoreFilename:(id)a0;
+ (id)preferenceStoreWithSecurityApplicationGroupIdentifier:(id)a0;
+ (id)defaultPreferenceStore;

- (void)save;
- (id)initWithURL:(id)a0;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)load;
- (void)removeAllItems;
- (id)initWithStoreFilename:(id)a0;
- (id)decodedObjectForKey:(id)a0;

@end
