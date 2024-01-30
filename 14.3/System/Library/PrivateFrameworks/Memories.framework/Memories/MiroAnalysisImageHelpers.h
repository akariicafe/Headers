@class CIDetector, NSMutableDictionary;

@interface MiroAnalysisImageHelpers : NSObject {
    CIDetector *_faceDetector;
    BOOL _faceTrackingEnabled;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _recordingStartTime;
    NSMutableDictionary *_currentFaceRangesKeyedByFaceID;
    unsigned long long _exifOrientation;
    NSMutableDictionary *_shotTypeToSampleCountMap;
}

@property (nonatomic) long long projectNaturalFrameRate;

+ (long long)imageOrientationForEXIFOrientation:(unsigned long long)a0;
+ (unsigned long long)exifOrientationForUIImageOrientation:(long long)a0;
+ (unsigned long long)exifOrientationForVideoTrack:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)processAVAsset:(id)a0 options:(unsigned long long)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (long long)_shotTypeForFaceBoundsArray:(id)a0;
- (long long)_positionForFaceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateFaceRangeWithFaceID:(long long)a0 detectionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 facePosition:(long long)a2 flags:(unsigned long long)a3 faceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)_updateShotTypeMapWithFaceBoundsArray:(id)a0;
- (void)_outputFaceRangesWithRemovedFaceIDs:(id)a0 outputtedFaceRanges:(id *)a1;
- (long long)_primaryShotType;
- (id)_makeColorAnalysisDictionary:(id)a0 forImageBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_analyzeColorsInImage:(id)a0;
- (BOOL)_startOutputtingFaceRangesWithStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 orientation:(unsigned long long)a1;
- (id)_analyzeColorsInVideoFrame:(struct CGImage { } *)a0 withOrientation:(unsigned long long)a1;
- (BOOL)_processOutputtingFaceRangeWithCGImage:(struct CGImage { } *)a0 detectionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 faceRanges:(id *)a2;
- (void)_stopOutputtingFaceRangesWithEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 lastFaceRanges:(id *)a1;
- (void)processUIImage:(id)a0 options:(unsigned long long)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
