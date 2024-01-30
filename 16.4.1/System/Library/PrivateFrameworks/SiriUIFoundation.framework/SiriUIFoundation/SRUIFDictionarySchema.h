@class NSMutableDictionary;

@interface SRUIFDictionarySchema : NSObject {
    NSMutableDictionary *_coercions;
}

- (id)init;
- (void).cxx_destruct;
- (id)coerceObject:(id)a0 error:(id *)a1;
- (void)setObjectCoercion:(id)a0 forKey:(id)a1;

@end
