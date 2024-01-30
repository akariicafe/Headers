@interface FigCaptureSessionPreparedBracket : NSObject

@property (nonatomic) unsigned int outputFormat;
@property (nonatomic) struct { int width; int height; } outputDimensions;
@property (nonatomic) unsigned int imageCount;
@property (nonatomic) int colorSpaceProperties;

@end
