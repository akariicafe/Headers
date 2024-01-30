@class NSDictionary, NSString, NSMutableDictionary;

@interface IMKeyValueCollectionDictionaryStorage : NSObject <IMKeyValueCollectionStorage> {
    NSMutableDictionary *_dictionary;
}

@property (readonly, copy, nonatomic) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;

@end
