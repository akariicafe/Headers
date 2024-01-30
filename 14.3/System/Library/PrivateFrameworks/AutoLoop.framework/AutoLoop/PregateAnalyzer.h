@class NSArray, NSDictionary, NSData, PregateFeatureBuilder;

@interface PregateAnalyzer : NSObject

@property (retain) NSDictionary *defaultParameters;
@property struct CGSize { double width; double height; } inputVideoSize;
@property BOOL haveInputVideoSize;
@property int trimInput_firstIndex;
@property int trimInput_lastIndex;
@property int gatingPassTrimResult_firstIndex;
@property int gatingPassTrimResult_lastIndex;
@property (retain) NSData *perFrameTranslationVecs;
@property (retain) NSArray *badFrameFlags;
@property (retain) NSArray *coarseFocusFlags;
@property (retain) NSArray *focusScores;
@property (retain) NSArray *gainScores;
@property (retain) NSArray *exposureTimes;
@property (retain) PregateFeatureBuilder *featureBuilder;
@property (retain) NSDictionary *pregateParameters;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } minimumRequiredTrimLength;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } requiredFrameTime;
@property struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } inputTrimTime;
@property (readonly) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } outputTrimTime;

+ (id)pregateFailureReasonsToString:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (id)paramValueForKey:(id)a0;
- (BOOL)getParamForKey:(id)a0 toFloat:(float *)a1;
- (BOOL)exposureTriplet:(const float *)a0 violatesThreshold:(float)a1;
- (int)processExposureArray:(id)a0 gainArray:(id)a1 intoFlagsArray:(id)a2 firstIndex:(long long)a3 lastIndex:(long long)a4;
- (struct MetadataFloatVector { float x0; float x1; })cumulativePanForStartIndex:(long long)a0 lastIndex:(long long)a1;
- (BOOL)subsegmentMeetsTrimCriteriaForFrames:(id)a0 firstFrame:(long long)a1 lastFrame:(long long)a2 firstFrameTimeOut:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a3 lastFrameTimeOut:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a4 preciseTrimTimeOut:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a5;
- (long long)findLongestPassingSegmentInFrameFlags:(id)a0 startIndex:(long long)a1 endIndex:(long long)a2 startOfRun:(long long *)a3 gatingFailures:(int *)a4;
- (int)isCumulativePanAcceptableForFrames:(id)a0 firstIndex:(long long)a1 lastIndex:(long long)a2;
- (int)fetchVideoDimensionsFromMetadata;
- (int)getFrameMetadataArray:(id *)a0;
- (BOOL)findFrameIndicesInFrameArray:(id)a0 forTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 startIndex:(int *)a2 endIndex:(int *)a3;
- (int)getPerFrameGatingData:(id)a0 firstIndex:(long long)a1 lastIndex:(long long)a2;
- (int)findGatingPassViaTrimming:(id)a0;
- (int)processPregateSuccess:(int *)a0;

@end
