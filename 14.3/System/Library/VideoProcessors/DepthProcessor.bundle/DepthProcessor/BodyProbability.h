@class DistanceTransformGpu;

@interface BodyProbability : NSObject {
    struct BodyProbabilityParameters { unsigned long long width; unsigned long long height; unsigned long long segmentation_width; unsigned long long segmentation_height; float confidence_threshold; float probability_falloff_sigma; float max_probability; int min_required_faces_for_segmentation; } _sParams;
    DistanceTransformGpu *_distanceTransform;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } _tempBufferForSegmentationConversion;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } _tempBufferForSegmentationScaling;
    struct __CVBuffer { } *_tempBufferForDistanceTransform;
    struct __CVBuffer { } *_tempBufferForBinaryBodyMask;
    BOOL _resourcesAllocated;
}

- (int)allocateResources;
- (void).cxx_destruct;
- (void)releaseResources;
- (void)dealloc;
- (int)_allocateVimageBuffers;
- (int)_checkBufferDimensionsForInput:(struct __CVBuffer { } *)a0 andOutput:(struct __CVBuffer { } *)a1;
- (int)_scaleBodySegmentation:(struct __CVBuffer { } *)a0;
- (int)_convertBodySegmentationToBinaryMask;
- (int)_addExponentialFalloffToDistanceTransformInto:(struct __CVBuffer { } *)a0;
- (id)initWithParameters:(struct BodyProbabilityParameters { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; float x4; float x5; float x6; int x7; } *)a0 andDistanceTransform:(id)a1;
- (int)bodyProbabilityFromSegmentation:(struct __CVBuffer { } *)a0 outputBodyProbabilityMap:(struct __CVBuffer { } *)a1;

@end
