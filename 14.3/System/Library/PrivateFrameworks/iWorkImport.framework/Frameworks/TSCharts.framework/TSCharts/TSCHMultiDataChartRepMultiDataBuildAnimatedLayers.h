@class CALayer, NSArray;

@interface TSCHMultiDataChartRepMultiDataBuildAnimatedLayers : NSObject

@property (retain, nonatomic) CALayer *legendLayer;
@property (retain, nonatomic) CALayer *backgroundLayer;
@property (copy, nonatomic) NSArray *referenceLineLayers;
@property (retain, nonatomic) CALayer *dataSetNameLayer;
@property (copy, nonatomic) NSArray *elementLayers;

+ (id)animatedLayers;

- (void).cxx_destruct;
- (id)allBackgroundFadingLayers;
- (id)elementFadingLayers;
- (id)layersRequiringGeometryTransformsBackgroundOnly:(BOOL)a0;
- (id)layersAlreadyHaveProperTransforms;

@end
