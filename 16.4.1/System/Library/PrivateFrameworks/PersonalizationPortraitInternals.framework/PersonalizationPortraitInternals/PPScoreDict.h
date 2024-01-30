@class NSSet, PPBaseScoreInputSet, NSMutableArray;

@interface PPScoreDict : NSObject <MLFeatureProvider> {
    PPBaseScoreInputSet *_scoreInputSet;
    struct unique_ptr<std::vector<float>, std::default_delete<std::vector<float>>> { struct __compressed_pair<std::vector<float> *, std::default_delete<std::vector<float>>> { void *__value_; } __ptr_; } _scalarValueStorage;
    struct unique_ptr<std::vector<std::shared_ptr<std::vector<float>>>, std::default_delete<std::vector<std::shared_ptr<std::vector<float>>>>> { struct __compressed_pair<std::vector<std::shared_ptr<std::vector<float>>> *, std::default_delete<std::vector<std::shared_ptr<std::vector<float>>>>> { void *__value_; } __ptr_; } _arrayValueStorage;
    NSMutableArray *_objectStorage;
}

@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (struct shared_ptr<std::vector<float>> { void *x0; struct __shared_weak_count *x1; })arraySharedPtrForIndex:(unsigned long long)a0;
- (id).cxx_construct;
- (unsigned long long)scalarValueCount;
- (id)arrayValueDictionary;
- (void)setArrayStorage:(void *)a0 forIndex:(unsigned long long)a1;
- (void)setArraySharedPtr:(struct shared_ptr<std::vector<float>> { void *x0; struct __shared_weak_count *x1; })a0 forIndex:(unsigned long long)a1;
- (float)scalarValueForIndex:(unsigned long long)a0;
- (void)setScalarValue:(float)a0 forIndex:(unsigned long long)a1;
- (id)arrayValueForIndex:(unsigned long long)a0;
- (id)objectForIndex:(unsigned long long)a0;
- (id)objectDictionary;
- (id)scalarValueDictionary;
- (unsigned long long)arrayValueCount;
- (unsigned long long)objectCount;
- (void)setArrayValue:(id)a0 forIndex:(unsigned long long)a1;
- (id)initWithScalarValueCount:(unsigned long long)a0 arrayValueCount:(unsigned long long)a1 objectCount:(unsigned long long)a2;
- (void)setObject:(id)a0 forIndex:(unsigned long long)a1;
- (id)init;
- (id)initWithScoreInputSet:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
