@class RLMArray;

@interface RLMListBase : NSObject <NSFastEnumeration> {
    struct unique_ptr<RLMObservationInfo, std::default_delete<RLMObservationInfo>> { struct __compressed_pair<RLMObservationInfo *, std::default_delete<RLMObservationInfo>> { struct RLMObservationInfo *__value_; } __ptr_; } _observationInfo;
}

@property (retain, nonatomic) RLMArray *_rlmArray;

- (id)valueForKey:(id)a0;
- (id)objectsAtIndexes:(id)a0;
- (id)initWithArray:(id)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)valueForKeyPath:(id)a0;

@end
