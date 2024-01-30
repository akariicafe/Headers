@class NSURL;

@interface CRDetectorConfiguration : NSObject

@property (readonly) BOOL cpuOnly;
@property (readonly) BOOL logIntermediateResults;
@property (readonly) NSURL *customModelURL;
@property BOOL runFullTile;
@property BOOL mergeFullTile;
@property (readonly) struct CGSize { double width; double height; } tileSize;
@property (readonly) double tileOverlap;
@property (readonly) struct CGSize { double width; double height; } minimumInputSize;
@property (readonly) struct CGSize { double width; double height; } maximumInputSize;
@property (readonly) double scoreMapScaleFactor;
@property int mergingType;

- (void).cxx_destruct;
- (id)initWithImageReaderOptions:(id)a0 error:(id *)a1;
- (id)initV1DefaultConfig;
- (id)initV2DefaultConfig;

@end
