@class ABPKMLImageData, ABPKImageData;

@interface ABPK2DSkeletonRawEspressoResult : NSObject

@property (readonly, nonatomic) ABPKMLImageData *imageDataForNeuralNetwork;
@property (readonly, nonatomic) ABPKImageData *inputImageData;
@property (readonly, nonatomic) struct __CVBuffer { } *heatMapBuffer;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ heatMapShape;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ heatMapStrides;
@property (readonly, nonatomic) struct __CVBuffer { } *affinityMapBuffer;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ affinityMapShape;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ affinityMapStrides;
@property (readonly, nonatomic) long long rotationNeeded;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithHeatMapBuffer:(id)a0 heatMapShape:(SEL)a1 heatMapStrides:(struct __CVBuffer { } *)a2 affinityMapBuffer:(struct __CVBuffer { } *)a3 affinityMapShape:(long long)a4 affinityMapStrides:(void /* unknown type, empty encoding */)a5 rotationNeeded:(void /* unknown type, empty encoding */)a6;
- (id)initWithHeatMapBuffer:(id)a0 heatMapShape:(SEL)a1 heatMapStrides:(struct __CVBuffer { } *)a2 rotationNeeded:(long long)a3;
- (id)initWithMLImage:(id)a0 originalImageData:(SEL)a1 heatMapBuffer:(id)a2 heatMapShape:(id)a3 heatMapStrides:(struct __CVBuffer { } *)a4 affinityMapBuffer:(struct __CVBuffer { } *)a5 affinityMapShape:(long long)a6 affinityMapStrides:(void /* unknown type, empty encoding */)a7 rotationNeeded:(void /* unknown type, empty encoding */)a8;
- (id)initWithMLImage:(id)a0 originalImageData:(SEL)a1 heatMapBuffer:(id)a2 heatMapShape:(id)a3 heatMapStrides:(struct __CVBuffer { } *)a4 rotationNeeded:(long long)a5;

@end
