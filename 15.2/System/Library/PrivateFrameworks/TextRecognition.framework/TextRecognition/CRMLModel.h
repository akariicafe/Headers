@class NSString, NSArray, MLModel;

@interface CRMLModel : NSObject {
    MLModel *model;
    int _modelHeight;
    int _modelWidth;
}

@property (readonly) NSString *modelName;
@property (readonly) const int *codeMap;
@property (readonly) int classCount;
@property (retain) NSArray *modelShape;
@property (readonly) int inputWidth;
@property (readonly) int inputHeight;
@property long long gpuBatchSize;
@property long long cpuBatchSize;

- (void).cxx_destruct;
- (id)predict:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)decodeActivations:(void *)a0;
- (id)decodeActivations:(void *)a0 blank:(unsigned short)a1 ctcAllowGarbage:(BOOL)a2 numResultNeeded:(long long)a3;
- (struct vector<std::vector<std::vector<float>>, std::allocator<std::vector<std::vector<float>>>> { void *x0; void *x1; struct __compressed_pair<std::vector<std::vector<float>> *, std::allocator<std::vector<std::vector<float>>>> { void *x0; } x2; })activationsFromImage:(id)a0;
- (id)initWithURL:(id)a0 restrictToCPU:(BOOL)a1 error:(id *)a2;
- (id)initRestrictingToCPU:(BOOL)a0;

@end
