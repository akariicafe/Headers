@class NSString, NSUbiquitousKeyValueStore;

@interface CloudSettingsStore : NSObject

@property (readonly) NSString *serviceIdentifier;
@property (readonly) NSUbiquitousKeyValueStore *kvsStore;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setData:(id)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)dataForKey:(id)a0;
- (void)setNumber:(id)a0 forKey:(id)a1;
- (id)numberForKey:(id)a0;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (void)setString:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)initWithStoreIdentifier:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (int)keyExists:(id)a0 andIsOfType:(id)a1;
- (void)syncNow:(BOOL)a0;

@end
