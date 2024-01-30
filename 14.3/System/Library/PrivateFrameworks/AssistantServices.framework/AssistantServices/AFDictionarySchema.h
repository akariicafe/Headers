@class NSMutableDictionary;

@interface AFDictionarySchema : NSObject {
    NSMutableDictionary *_coercions;
}

- (id)init;
- (void).cxx_destruct;
- (void)setObjectCoercion:(id)a0 forKey:(id)a1;
- (id)coerceObject:(id)a0 error:(id *)a1;

@end
