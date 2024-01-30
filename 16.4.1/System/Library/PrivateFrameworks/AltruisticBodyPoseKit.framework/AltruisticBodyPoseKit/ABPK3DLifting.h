@class ABPKMLModelConfiguration3DLifting, NSString, NSArray, ABPKMLNetworkV2, NSMutableDictionary, ABPK3DLiftingResult, ABPKSkeletonDefinition;

@interface ABPK3DLifting : NSObject <ABPK3DLiftingAlgorithm> {
    NSArray *_inputTensorNames;
    NSArray *_outputTensorNames;
    void *_context;
    void *_plan;
    struct { void *plan; int network_index; } _network;
    ABPKMLNetworkV2 *_networkV2;
    NSMutableDictionary *inputBufferDict;
    NSMutableDictionary *outputBufferDict;
    BOOL _useEspressoV2;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _outputTensor;
    ABPK3DLiftingResult *_liftingResult;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { struct *__begin_; struct *__end_; struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { struct *__value_; } __end_cap_; } _liftingResultAsModelPoses;
    ABPKSkeletonDefinition *_abpkLiftingSkeletonDefinition;
    ABPKMLModelConfiguration3DLifting *_mlConfig;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)getLiftingResults;
- (int)runLiftingModelWithData:(id)a0 atTimestamp:(double)a1;
- (BOOL)initMLNetwork;
- (struct { void /* unknown type, empty encoding */ x0[4]; } *)get3DLiftingResultsAsModelPoses;
- (void)_adjustBoneLength:(void *)a0;
- (void)_endLoading3DLiftingMLModelSignpost;
- (void)_endPostProcessDataSignpostWithTimestamp:(double)a0;
- (void)_endPrepareLiftingInputSignpostWithTimestamp:(double)a0;
- (void)_endRunLiftingModelSignpostWithTimestamp:(double)a0;
- (void)_startLoading3DLiftingMLModelSignpost;
- (void)_startPostProcessDataSignpostWithTimestamp:(double)a0;
- (void)_startPrepareLiftingInputSignpostWithTimestamp:(double)a0;
- (void)_startRunLiftingModelSignpostWithTimestamp:(double)a0;
- (void)_transformRelativeToHip:(void *)a0 count:(unsigned long long)a1;

@end
