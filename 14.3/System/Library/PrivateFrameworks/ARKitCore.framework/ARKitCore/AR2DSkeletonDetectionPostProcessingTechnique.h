@class AR2DSkeletonDetectionResult, AR2DSkeletonRawEspressoResult, AR2DSkeletonDetectionPostProcessGPU, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AR2DSkeletonDetectionPostProcessingTechnique : ARImageBasedTechnique {
    AR2DSkeletonDetectionPostProcessGPU *_postProcessorGPU;
    struct SkeletonJointFilter<float> { struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } m_values; struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } m_speed; struct vector<double, std::__1::allocator<double> > { double *__begin_; double *__end_; struct __compressed_pair<double *, std::__1::allocator<double> > { double *__value_; } __end_cap_; } m_timestamps; float m_smoothing; float m_lowest_threshold; float m_low_threshold; float m_high_threshold; float m_highest_threshold; float m_temporal_smoothing; float m_prediction_factor; float m_min_smoothing; float m_up_slope; float m_down_slope; float m_temporal_slope; } _extrapolationFilter2D;
    double _extrapolationTime;
    struct SkeletonJointFilter<float> { struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } m_values; struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } m_speed; struct vector<double, std::__1::allocator<double> > { double *__begin_; double *__end_; struct __compressed_pair<double *, std::__1::allocator<double> > { double *__value_; } __end_cap_; } m_timestamps; float m_smoothing; float m_lowest_threshold; float m_low_threshold; float m_high_threshold; float m_highest_threshold; float m_temporal_smoothing; float m_prediction_factor; float m_min_smoothing; float m_up_slope; float m_down_slope; float m_temporal_slope; } _extrapolationFilter2DForLiftingData;
    AR2DSkeletonDetectionResult *_previous3DSkeleton;
    NSObject<OS_dispatch_semaphore> *_previous3DSkeletonSemaphore;
    BOOL _shouldPush3DSupportSkeleton;
    BOOL _use3DSupportSkeletonForExtrapolation;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _deterministic;
}

@property (retain, nonatomic) AR2DSkeletonRawEspressoResult *previousRawEspressoResult;

- (id)init;
- (void).cxx_destruct;
- (id)processData:(id)a0;
- (id).cxx_construct;
- (void)prepare:(BOOL)a0;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (double)requiredTimeInterval;

@end
