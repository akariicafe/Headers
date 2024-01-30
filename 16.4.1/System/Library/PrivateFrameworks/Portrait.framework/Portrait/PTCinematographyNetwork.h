@class NSString, PTCinematographyNetworkParameters, NSArray, PTCinematographyDetection, NSMutableArray, NSMutableIndexSet;

@interface PTCinematographyNetwork : NSObject {
    long long _step_i;
    void *_context;
    void *_plan;
    struct { void *plan; int network_index; } _network;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _x_in;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _hx_in;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _cx_in;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _mask_in;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _hx_out;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _cx_out;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _pred_out;
}

@property (class, readonly) NSString *defaultVersionString;

@property (readonly) PTCinematographyNetworkParameters *params;
@property (readonly) NSArray *inputSignals;
@property (readonly) PTCinematographyDetection *zeroDisparityDetection;
@property (readonly) NSMutableArray *networkDetections;
@property (readonly) NSMutableIndexSet *unusedIndexes;
@property (retain) PTCinematographyDetection *lastFocusDetection;
@property unsigned long long lastNetworkPredictionIndex;
@property long long lastNetworkPredictionTrackID;
@property (readonly) NSString *versionString;
@property (readonly) float expectedFPS;

+ (id)defaultVersionStringForDetectionModel:(unsigned long long)a0;
+ (id)earliestVersionString;
+ (BOOL)existsVersionString:(id)a0;
+ (id)firstExistingVersion:(id)a0;
+ (id)latestVersionString;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithVersionString:(id)a0;
- (void)_forgetNetworkDetectionAtIndex:(unsigned long long)a0;
- (BOOL)_allNetworkDetectionsAreStaleAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (unsigned long long)_allocateNetworkDetectionIndex;
- (id)_asCinematographyDictionary;
- (void)_debugLogAllNetworkInputs;
- (void)_debugLogNetworkInputs;
- (void)_debugLogNetworkOutputs;
- (id)_detectionAtNetworkIndex:(unsigned long long)a0 frameDetections:(id)a1;
- (void)_forgetNetworkDetectionsOlderThan:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (unsigned long long)_getLeastRecentNetworkDetectionIndex;
- (id)_initWithCinematographyDictionary:(id)a0;
- (id)_initWithNetwork:(id)a0 parameters:(id)a1;
- (BOOL)_isNetworkCompatibleDetectionType:(unsigned long long)a0;
- (BOOL)_loadEspressoNetwork:(id)a0;
- (unsigned long long)_networkPredictionIndex;
- (void)_setDetection:(id)a0 asInputRow:(unsigned long long)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 missing:(BOOL)a3;
- (void)_setMissingDetectionAtIndex:(unsigned long long)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_setNetworkDetection:(id)a0 atIndex:(unsigned long long)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)_setNetworkDetectionsFromFrameDetections:(id)a0;
- (void)_setNetworkInputsFromNetworkDetections;
- (BOOL)_shouldIgnoreNetworkPredictionIndex:(unsigned long long)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)_shouldResetDetectionFromType:(unsigned long long)a0 toType:(unsigned long long)a1;
- (void)_updateLastNetworkPredictionIndex:(unsigned long long)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)stepWithFrameDetections:(id)a0;

@end
