@interface PHASERoomSimulationDataSet : NSObject {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _rayOriginPoints;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _rayIntersectPoints;
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__value_; } __end_cap_; } _imageSourcePoints;
    struct vector<std::vector<float __attribute__((ext_vector_type(3)))>, std::allocator<std::vector<float __attribute__((ext_vector_type(3)))>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<float __attribute__((ext_vector_type(3)))> *, std::allocator<std::vector<float __attribute__((ext_vector_type(3)))>>> { void *__value_; } __end_cap_; } _imageSourceIntersectionPoints;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _timeFrequencyHistogramData;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _directionalHistogramData;
    struct DebugDirectionalMetadata { unsigned long long mNumDirectionalEvents; struct vector<Phase::Vector<float, 3>, std::allocator<Phase::Vector<float, 3>>> { void *__begin_; void *__end_; struct __compressed_pair<Phase::Vector<float, 3> *, std::allocator<Phase::Vector<float, 3>>> { void *__value_; } __end_cap_; } mDirections; struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } mDelaysInSeconds; struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { void *__value_; } __end_cap_; } mSubbandGains; struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } mInvertPolarity; } _earlyResponseMetadata;
    struct DebugDirectionalMetadata { unsigned long long mNumDirectionalEvents; struct vector<Phase::Vector<float, 3>, std::allocator<Phase::Vector<float, 3>>> { void *__begin_; void *__end_; struct __compressed_pair<Phase::Vector<float, 3> *, std::allocator<Phase::Vector<float, 3>>> { void *__value_; } __end_cap_; } mDirections; struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } mDelaysInSeconds; struct vector<std::vector<float>, std::allocator<std::vector<float>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<float> *, std::allocator<std::vector<float>>> { void *__value_; } __end_cap_; } mSubbandGains; struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } mInvertPolarity; } _lateReverberationMetadata;
}

@property (nonatomic) unsigned long long numHistogramFrequencies;
@property (nonatomic) unsigned long long numHistogramTimeSteps;
@property (nonatomic) unsigned long long numImageSources;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (long long)getImageSourceContainerSize;
- (long long)getImageSourceIntersectionContainerSize:(long long)a0;
- (long long)getIntersectionContainerSize;
- (long long)getHistogramContainerSize;
- (long long)getEarlyResponseMetadataSize;
- (void /* unknown type, empty encoding */)getEarlyMetadataDirectionAt:(long long)a0;
- (float)getEarlyMetadataDelayAt:(long long)a0;
- (float)getEarlyMetadataPolarityAt:(long long)a0;
- (float)getEarlyMetadataSubbandGainAt:(long long)a0 subbandIndex:(long long)a1;
- (long long)getLateReverbMetadataSize;
- (void /* unknown type, empty encoding */)getLateMetadataDirectionAt:(long long)a0;
- (float)getLateMetadataDelayAt:(long long)a0;
- (float)getLateMetadataPolarityAt:(long long)a0;
- (float)getLateMetadataSubbandGainAt:(long long)a0 subbandIndex:(long long)a1;
- (id)initWithRoomSimulationDebugView:(const void *)a0;
- (void /* unknown type, empty encoding */)getOriginAtIndex:(long long)a0;
- (void /* unknown type, empty encoding */)getIntersectionAtIndex:(long long)a0;
- (void /* unknown type, empty encoding */)getImageSourceLocationAtIndex:(long long)a0;
- (void /* unknown type, empty encoding */)getImageSourceIntersectionAt:(long long)a0 intersectionIndex:(long long)a1;
- (float)getTimeHistogramBin:(long long)a0 timeIndex:(long long)a1;

@end
