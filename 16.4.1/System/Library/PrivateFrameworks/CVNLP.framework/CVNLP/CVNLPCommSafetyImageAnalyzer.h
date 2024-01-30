@class NSDictionary, NSNumber, NSURL;

@interface CVNLPCommSafetyImageAnalyzer : CVNLPModelBase {
    unsigned long long data_dim[4];
    void *encoderPlan;
    void *encoderCtx;
    struct { void *plan; int network_index; } encoderNet;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } leafProbabilities;
}

@property (readonly) NSDictionary *acceptedOutputIndices;
@property (readonly) NSNumber *otgxMainThreshold;
@property (readonly) unsigned long long otgxMainIndex;
@property (readonly) BOOL otgxRetrieveAllClasses;
@property (readonly) NSURL *modelUrl;
@property (readonly) int _espressoEngine;
@property (readonly) int _espressoDeviceId;
@property (readonly) int _espressoStorageType;

+ (BOOL)_checkIfOnANEDevice;
+ (id)_createNameDecodingDict;
+ (id)_createNameEncodingDict;
+ (id)_decodeName:(id)a0;
+ (id)_encodeName:(id)a0;
+ (id)_nameFromRevParts:(id)a0;
+ (id)_readOperatingThresholdsDataUsingModelURL:(id)a0 error:(id *)a1;
+ (id)getOperatingPointDataForClassName:(id)a0 modelURL:(id)a1 error:(id *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithModelURL:(id)a0 options:(id)a1 error:(id *)a2;
- (id)_computeOutputForPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (void)_extractThresholdForOTGXMain:(id)a0;
- (id)_processNetworkOutput:(id)a0;
- (id)classifyImage:(struct CGImage { } *)a0 error:(id *)a1;
- (id)classifyPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)computeOutputForImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 error:(id *)a1;
- (id)generateClassificationScoresForImage:(struct CGImage { } *)a0 error:(id *)a1;
- (id)generateClassificationScoresForPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)loadNetworkForURL:(id)a0 espressoEngine:(int)a1 storageType:(int)a2 deviceId:(int)a3;

@end
