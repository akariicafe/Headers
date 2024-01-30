@class NSMutableDictionary;

@interface AFDictionarySchema : NSObject {
    NSMutableDictionary *_coercions;
}

- (void)setObjectCoercion:(id)a0 forKey:(id)a1;
- (id)coerceObject:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
