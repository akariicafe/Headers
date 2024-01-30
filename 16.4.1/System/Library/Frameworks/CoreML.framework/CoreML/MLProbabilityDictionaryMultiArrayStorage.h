@class MLMultiArray;

@interface MLProbabilityDictionaryMultiArrayStorage : NSObject <MLProbabilityDictionaryStorage> {
    MLMultiArray *_multiArray;
    unsigned long long _count;
}

- (unsigned long long)count;
- (void).cxx_destruct;
- (unsigned long long)maxElementIndex;
- (id)initWithMultiArray:(id)a0 count:(unsigned long long)a1;
- (id)probabilityAtIndex:(unsigned long long)a0;

@end
