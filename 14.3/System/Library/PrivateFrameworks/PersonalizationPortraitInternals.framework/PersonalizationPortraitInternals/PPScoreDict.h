@class NSSet, PPBaseScoreInputSet, NSMutableArray;

@interface PPScoreDict : NSObject <MLFeatureProvider> {
    PPBaseScoreInputSet *_scoreInputSet;
    struct unique_ptr<std::__1::vector<float, std::__1::allocator<float> >, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float> > > > { struct __compressed_pair<std::__1::vector<float, std::__1::allocator<float> > *, std::__1::default_delete<std::__1::vector<float, std::__1::allocator<float> > > > { struct vector<float, std::__1::allocator<float> > *__value_; } __ptr_; } _scalarValueStorage;
    struct unique_ptr<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > > > >, std::__1::default_delete<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > > > > > > { struct __compressed_pair<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > > > > *, std::__1::default_delete<std::__1::vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > > > > > > { struct vector<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > >, std::__1::allocator<std::__1::shared_ptr<std::__1::vector<float, std::__1::allocator<float> > > > > *__value_; } __ptr_; } _arrayValueStorage;
    NSMutableArray *_objectStorage;
}

@property (readonly, nonatomic) NSSet *featureNames;

- (unsigned long long)objectCount;
- (id)featureValueForName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (struct shared_ptr<std::__1::vector<float, std::__1::allocator<float> > > { struct vector<float, std::__1::allocator<float> > *x0; struct __shared_weak_count *x1; })arraySharedPtrForIndex:(unsigned long long)a0;
- (id)arrayValueForIndex:(unsigned long long)a0;
- (unsigned long long)arrayValueCount;
- (id)arrayValueDictionary;
- (void)setScalarValue:(float)a0 forIndex:(unsigned long long)a1;
- (id)description;
- (id)initWithScalarValueCount:(unsigned long long)a0 arrayValueCount:(unsigned long long)a1 objectCount:(unsigned long long)a2 scoreInputSet:(id)a3;
- (void)setArraySharedPtr:(struct shared_ptr<std::__1::vector<float, std::__1::allocator<float> > > { struct vector<float, std::__1::allocator<float> > *x0; struct __shared_weak_count *x1; })a0 forIndex:(unsigned long long)a1;
- (id).cxx_construct;
- (id)objectDictionary;
- (void)setArrayValue:(id)a0 forIndex:(unsigned long long)a1;
- (id)scalarValueDictionary;
- (void)setObject:(id)a0 forIndex:(unsigned long long)a1;
- (float)scalarValueForIndex:(unsigned long long)a0;
- (unsigned long long)scalarValueCount;
- (id)initWithScoreInputSet:(id)a0;
- (id)objectForIndex:(unsigned long long)a0;
- (void)setArrayStorage:(struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } *)a0 forIndex:(unsigned long long)a1;
- (id)initWithScalarValueCount:(unsigned long long)a0 arrayValueCount:(unsigned long long)a1 objectCount:(unsigned long long)a2;

@end
