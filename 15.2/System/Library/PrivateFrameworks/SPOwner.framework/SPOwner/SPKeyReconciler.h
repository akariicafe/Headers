@class NSDictionary, NSMutableArray;

@interface SPKeyReconciler : NSObject {
    NSDictionary *_backingDictionary;
    NSMutableArray *_keyIndices;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)reconcileKey:(id)a0 matchedIndex:(unsigned int *)a1 sequence:(unsigned char *)a2 error:(unsigned char *)a3;

@end
