@class ARDirectionalLightEstimate, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARFaceLightEstimationTechnique : ARTechnique {
    NSObject<OS_dispatch_semaphore> *_resultSemaphore;
    ARDirectionalLightEstimate *_lastLightEstimate;
    float _lightIntensity;
    float _temperature;
    struct ExponentialSmoother<float> { struct optional<float> { union { char __null_state_; float __val_; } ; BOOL __engaged_; } state; } _smoother;
    NSObject<OS_dispatch_queue> *_lightEstimationQueue;
    NSObject<OS_dispatch_semaphore> *_estimatingSemaphore;
    struct FacialLightEstimation { struct Matrix<float, 0, 1, false> { float *m_data; unsigned long long m_capacity; unsigned int m_rows; } m_validSampleIntensities; struct vector<int, std::__1::allocator<int> > { int *__begin_; int *__end_; struct __compressed_pair<int *, std::__1::allocator<int> > { int *__value_; } __end_cap_; } m_validChromaSampleIDS; struct vector<int, std::__1::allocator<int> > { int *__begin_; int *__end_; struct __compressed_pair<int *, std::__1::allocator<int> > { int *__value_; } __end_cap_; } m_sampleIndices_all; struct Matrix<float, 0, 0, false> { float *m_data; unsigned long long m_capacity; unsigned int m_rows; unsigned int m_cols; } m_validRtfs; struct shared_ptr<arkit::PrecomputedFaceData> { struct PrecomputedFaceData *__ptr_; struct __shared_weak_count *__cntrl_; } m_precomputedFaceData; struct ExponentialSmoother<cva::Matrix<float, 9, 1, false> > { struct optional<cva::Matrix<float, 9, 1, false> > { union { char __null_state_; struct Matrix<float, 9, 1, false> { float m_data[9]; } __val_; } ; BOOL __engaged_; } state; } m_smoother; struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *__value_; } __end_cap_; } m_inliers; } _faceLightEstimator;
    float _shSmoothingAlpha;
}

+ (float)_computeShSmoothingAlpha:(double)a0;
+ (struct shared_ptr<arkit::FaceTrackingData> { struct FaceTrackingData *x0; struct __shared_weak_count *x1; })_transformFaceTrackingData:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)processData:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (unsigned long long)requiredSensorDataTypes;

@end
