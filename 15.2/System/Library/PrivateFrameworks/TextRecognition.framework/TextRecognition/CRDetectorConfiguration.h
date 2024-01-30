@class NSURL, NSString, NSObject;
@protocol MTLDevice;

@interface CRDetectorConfiguration : NSObject

@property (readonly) BOOL cpuOnly;
@property (readonly) BOOL logIntermediateResults;
@property (readonly) NSURL *customModelURL;
@property (readonly) BOOL disableScriptDetection;
@property BOOL runFullTile;
@property BOOL runFineScale;
@property BOOL mergeFullTile;
@property BOOL useScaleTraversal;
@property (readonly) struct CGSize { double width; double height; } tileSize;
@property (readonly) double tileOverlap;
@property (readonly) NSString *prioritization;
@property (readonly) struct CGSize { double width; double height; } minimumInputSize;
@property (readonly) struct CGSize { double width; double height; } maximumInputSize;
@property (readonly) double inputLengthLimit;
@property (readonly) NSObject<MTLDevice> *metalDevice;
@property (readonly) float scriptIDLatinChineseRatioThreshold;
@property (readonly) double scoreMapScaleFactor;
@property int mergingType;

- (id)initWithImageReaderOptions:(id)a0 error:(id *)a1;
- (id)initV2DefaultConfig;
- (void).cxx_destruct;
- (id)initV1DefaultConfig;
- (id)initV3DefaultConfig;

@end
