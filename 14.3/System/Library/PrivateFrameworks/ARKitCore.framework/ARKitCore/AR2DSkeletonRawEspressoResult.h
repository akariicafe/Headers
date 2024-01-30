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

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMLImage:(id)a0 originalImageData:(SEL)a1 rotationNeeded:(id)a2 regionOfInterest:(id)a3 heatMapBuffer:(long long)a4 heatMapShape:(struct CGSize { double x0; double x1; })a5 heatMapStrides:(struct __CVBuffer { } *)a6 affinityMapBuffer:(struct __CVBuffer { } *)a7 affinityMapShape:(void /* unknown type, empty encoding */)a8 affinityMapStrides:(void /* unknown type, empty encoding */)a9;

@end
