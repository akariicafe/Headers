@class NSString, BWInferenceMetadataRequirement, NSMutableData;

@interface BWInferenceHumanPosePropagator : NSObject <BWInferencePropagatable, BWEspressoInferenceTensorMemoryProvider> {
    BWInferenceMetadataRequirement *_outputRequirement;
    NSMutableData *_heatmapData;
    struct __IOSurface { } *_tensorBackingSurface;
}

@property (readonly, nonatomic) BOOL allowsAsyncPropagation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
