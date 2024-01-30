@class NSString, ARImageData;

@interface AR2DSkeletonRawEspressoResult : NSObject <ARResultData>

@property (readonly, nonatomic) ARImageData *imageDataForNeuralNetwork;
@property (readonly, nonatomic) ARImageData *inputImageData;
@property (readonly, nonatomic) long long rotationNeeded;
@property (readonly, nonatomic) struct CGSize { double width; double height; } regionOfInterest;
@property (readonly, nonatomic) struct __CVBuffer { } *heatMapBuffer;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ heatMapShape;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ heatMapStrides;
@property (readonly, nonatomic) struct __CVBuffer { } *affinityMapBuffer;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ affinityMapShape;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ affinityMapStrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
