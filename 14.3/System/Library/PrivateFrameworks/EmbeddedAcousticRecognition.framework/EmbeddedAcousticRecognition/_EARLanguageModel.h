@interface _EARLanguageModel : NSObject {
    struct vector<std::__1::pair<id<_EARLanguageModelDataSource>, float>, std::__1::allocator<std::__1::pair<id<_EARLanguageModelDataSource>, float> > > { struct pair<id<_EARLanguageModelDataSource>, float> *__begin_; struct pair<id<_EARLanguageModelDataSource>, float> *__end_; struct __compressed_pair<std::__1::pair<id<_EARLanguageModelDataSource>, float> *, std::__1::allocator<std::__1::pair<id<_EARLanguageModelDataSource>, float> > > { struct pair<id<_EARLanguageModelDataSource>, float> *__value_; } __end_cap_; } _dataSources;
}

@property (readonly, nonatomic) float totalWeight;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)enumerateDataSourcesAndWeightsUsingBlock:(id /* block */)a0;
- (void)addDataSource:(id)a0 weight:(float)a1;

@end
