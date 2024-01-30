@class NSMutableDictionary, NSMutableArray;

@interface BurstImageFaceAnalysisContext : NSObject

@property (retain) NSMutableDictionary *curConfig;
@property (retain) NSMutableDictionary *faceIdMapping;
@property (retain) NSMutableDictionary *renameMapping;
@property int faceIdCounter;
@property (retain) NSMutableArray *faceInfoArray;
@property int numFramesSinceFullFaceCore;
@property int numFramesNoFaces;
@property (retain) NSMutableArray *faceTimestampArray;
@property double latestImageTimestamp;
@property int lastFaceIndex;
@property double timeFaceDetectionDone;
@property double timeBlinkDetectionDone;
@property BOOL forceFaceDetectionEnable;
@property BOOL forceFaceDetailsEnable;
@property double latestFaceTimestamp;
@property int version;

- (id)initWithVersion:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateFaceCoreROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageStat:(id)a1 needSWFaceDetection:(BOOL *)a2;
- (id)_filterFacesToProcess:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 imageStat:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })padRoiRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 paddingX:(float)a1 paddingY:(float)a2;
- (id)findOverlappingFaceStat:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 imageStat:(id)a1;
- (void)addFaceToArray:(id)a0;
- (int)findFacesInImage:(struct __CVBuffer { } *)a0 imageStat:(id)a1;
- (void)calculateFaceFocusInImage:(struct __CVBuffer { } *)a0 imageStat:(id)a1;
- (void)calcFaceScores:(id)a0;
- (void)adjustFaceIdsForImageStat:(id)a0;
- (void)extractFacesFromMetadata:(id)a0;
- (void)addFacesToImageStat:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (void)dumpFaceInfoArray;

@end
