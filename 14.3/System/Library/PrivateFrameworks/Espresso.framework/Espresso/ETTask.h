@class ETModelDef, ETOptimizerDef, ETImageDescriptorExtractor;

@interface ETTask : NSObject {
    struct shared_ptr<Espresso::net> { struct net *__ptr_; struct __shared_weak_count *__cntrl_; } network;
}

@property (retain, nonatomic) ETModelDef *model;
@property (retain, nonatomic) ETOptimizerDef *optimizer;
@property (retain, nonatomic) ETImageDescriptorExtractor *extractor;
@property (nonatomic) BOOL dumpData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithModelDef:(id)a0 optimizerDef:(id)a1 extractor:(id)a2 needWeightsInitialization:(BOOL)a3;
- (id)initWithModelDef:(id)a0 optimizerDef:(id)a1 lossConfig:(id)a2 extractor:(id)a3;
- (struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x1; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x2; })reinitializeVariables;
- (float)fit:(id)a0 numberOfBatches:(unsigned int)a1 withProgress:(id /* block */)a2;
- (BOOL)runBatches:(id)a0 numberOfBatches:(unsigned int)a1 outputNames:(id)a2 batchCallback:(id /* block */)a3;
- (void)saveNetwork:(id)a0 revertToInferenceMode:(BOOL)a1;
- (id)initWithModelDef:(id)a0 optimizerDef:(id)a1 extractor:(id)a2;
- (id)initWithModelDef:(id)a0 optimizerDef:(id)a1 lossConfig:(id)a2;
- (void)saveNetwork:(id)a0;
- (BOOL)moveToGPU:(int)a0 error:(id *)a1;
- (float)fit:(id)a0 numberOfEpochs:(int)a1 withProgress:(id /* block */)a2;
- (BOOL)fit:(id)a0 numberOfBatches:(unsigned int)a1 outputNames:(id)a2 batchCallback:(id /* block */)a3;
- (BOOL)fit:(id)a0 numberOfEpochs:(int)a1 outputNames:(id)a2 batchCallback:(id /* block */)a3;
- (BOOL)runInference:(id)a0 outputNames:(id)a1 batchCallback:(id /* block */)a2;
- (id).cxx_construct;
- (id)evaluate:(id)a0;

@end
