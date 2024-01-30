@class RLMArray;

@interface RLMListBase : NSObject <NSFastEnumeration> {
    struct unique_ptr<RLMObservationInfo, std::__1::default_delete<RLMObservationInfo> > { struct __compressed_pair<RLMObservationInfo *, std::__1::default_delete<RLMObservationInfo> > { struct RLMObservationInfo *__value_; } __ptr_; } _observationInfo;
}

@property (retain, nonatomic) RLMArray *_rlmArray;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectsAtIndexes:(id)a0;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (id).cxx_construct;
- (id)initWithArray:(id)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)valueForKeyPath:(id)a0;

@end
