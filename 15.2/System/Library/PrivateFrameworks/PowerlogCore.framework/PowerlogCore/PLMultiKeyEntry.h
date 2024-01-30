@class NSMutableDictionary;

@interface PLMultiKeyEntry : PLEntry

@property (retain) NSMutableDictionary *multiKeys;

+ (void)load;

- (id)keysForSubKey:(id)a0 ofSubKeyType:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)serializedForJSON;
- (id)objectsForSubKey:(id)a0 ofSubKeyType:(id)a1;

@end
