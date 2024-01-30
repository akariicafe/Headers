@class UPPreprocessor, UPSystemConfiguration, UPUsoSerializer, NSLocale, UPLoadedModelConfiguration, UPModelIdentifier;

@interface UPParserModel : NSObject

@property (readonly) UPUsoSerializer *_usoSerializer;
@property (readonly, nonatomic) UPSystemConfiguration *_systemConfiguration;
@property (readonly, nonatomic) UPLoadedModelConfiguration *_loadedModelConfiguration;
@property (readonly, nonatomic) UPModelIdentifier *identifier;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (nonatomic) BOOL isPLUMEnabled;
@property (readonly) UPPreprocessor *preprocessor;

+ (id)modelWithSystemConfiguration:(id)a0 loadedModelConfiguration:(id)a1 error:(id *)a2;
+ (id)modelWithSystemConfiguration:(id)a0 modelConfiguration:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)predictionFromQuery:(id)a0 error:(id *)a1;
- (id)predictionFromQuery:(id)a0 preprocessorOutput:(id)a1 error:(id *)a2;
- (id)initWithSystemConfiguration:(id)a0 loadedModelConfiguration:(id)a1;
- (id)_candidateForBeamSequence:(const void *)a0 utterance:(const void *)a1 outputTokens:(const void *)a2 resolver:(void *)a3 dataDetectorSpans:(const void *)a4;
- (id)_candidateForUtterance:(const void *)a0 probability:(float)a1 labelledSpans:(const void *)a2 dataDetectorSpans:(const void *)a3 intent:(id)a4;
- (struct UPInferenceResult { struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x0; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x1; } x0; struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x0; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x1; } x1; struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x0; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x1; } x2; })forwardWithSpanLabels:(struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x0; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x1; })a0 embeddings:(struct UPGenericTensor { struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x0; unsigned long long *x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x0; } x2; } x0; struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; } x1; })a1 utterance:(id)a2;
- (id)_resultFromInferenceResult:(const void *)a0 query:(id)a1 outputTokens:(const void *)a2 dataDetectorSpans:(const void *)a3 resolver:(void *)a4;

@end
