@class NSDictionary;

@interface AAFSerialization : NSObject {
    NSDictionary *_serializersByType;
}

+ (id)instance;
+ (id)ofType:(id)a0;
+ (id)dataFromDictionary:(id)a0 ofType:(id)a1;
+ (id)dictionaryFromObject:(id)a0 ofType:(id)a1;
+ (id)stringFromDictionary:(id)a0 ofType:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)addSerializer:(id)a0;
- (id)serializerOfType:(id)a0;

@end
