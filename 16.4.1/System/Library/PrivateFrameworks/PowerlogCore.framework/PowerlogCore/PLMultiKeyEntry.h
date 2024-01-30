@class NSMutableDictionary;

@interface PLMultiKeyEntry : PLEntry

@property (retain) NSMutableDictionary *multiKeys;

+ (void)load;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)keysForSubKey:(id)a0 ofSubKeyType:(id)a1;
- (id)init;
- (id)objectsForSubKey:(id)a0 ofSubKeyType:(id)a1;
- (id)serializedForJSON;
- (void).cxx_destruct;

@end
