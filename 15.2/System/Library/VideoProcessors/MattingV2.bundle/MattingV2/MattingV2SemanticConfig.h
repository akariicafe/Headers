@interface MattingV2SemanticConfig : NSObject

@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int kernelSpatialDiameter;
@property (nonatomic) float epsilon;
@property (nonatomic) unsigned int iterations;
@property (nonatomic) BOOL useDepthFilter;
@property (nonatomic) BOOL constraintsEnabled;
@property (nonatomic) float fgThresholdValue;
@property (nonatomic) float bgThresholdValue;
@property (nonatomic) unsigned int erosionKernelSize;

@end
