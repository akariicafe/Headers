@class NSArray, NSIndexSet;

@interface SSCompactValueArray : NSObject {
    NSArray *_objects;
    NSIndexSet *_indexes;
}

+ (id)decodeFromDictionary:(id)a0 nesting:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;

@end
