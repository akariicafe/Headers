@class NSArray, NSIndexSet;

@interface SSCompactValueArray : NSObject {
    NSArray *_objects;
    NSIndexSet *_indexes;
}

+ (id)decodeFromDictionary:(id)a0 nesting:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)init;

@end
