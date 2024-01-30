@class NSString, NSDictionary, NSMutableDictionary, NSData, NSSet;

@interface HMIVideoAnalyzerMutableReport : HMFObject <NSSecureCoding, HMFLogging>

@property (class, readonly) NSDictionary *systemDeviceInformation;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) long long version;
@property (readonly) NSDictionary *deviceInformation;
@property (readonly) NSMutableDictionary *sessions;
@property (readonly) NSData *data;
@property (readonly) NSSet *eventClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)chartSpecWithRange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 colors:(id)a1 labels:(id)a2;
+ (id)greedyMatchBetweenPredictionEvents:(id)a0 truthEvents:(id)a1 falsePositiveIndices:(id)a2 falseNegativeIndices:(id)a3 eventClass:(Class)a4 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 confidenceThreshold:(float)a6 scoreThreshold:(float)a7 scoreFunction:(id /* block */)a8;
+ (void)sihouetteScoreForMatches:(id)a0 previousMatches:(id)a1 truePositiveScores:(id)a2 falsePositiveScores:(id)a3 falseNegativeScores:(id)a4;
+ (void)writeImageCropFromFrame:(id)a0 events:(id)a1 outputPath:(id)a2 source:(id)a3;
+ (void)writeJSONChartData:(id)a0 outputPath:(id)a1;

- (id)initWithData:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)appendFragmentResult:(id)a0 forKey:(id)a1 source:(id)a2 redactFrames:(BOOL)a3;
- (void)appendFragmentResultsFromReport:(id)a0;
- (id)averagePrecisionForMinPrecision:(float)a0 comparator:(id /* block */)a1;
- (id)averagePrecisionWithClassificationTruth:(id)a0 minPrecision:(float)a1;
- (id)averagePrecisionWithDetectionTruth:(id)a0 minPrecision:(float)a1 iouThreshold:(float)a2 videoMetric:(BOOL)a3;
- (id)chartDataWithBaseline:(BOOL)a0 comparator:(id /* block */)a1;
- (id)chartDataWithClassificationTruth:(id)a0 isBaseline:(BOOL)a1;
- (id)chartDataWithDetectionTruth:(id)a0 isBaseline:(BOOL)a1 iouThreshold:(float)a2 videoMetric:(BOOL)a3;
- (id)compareWithClassificationTruth:(id)a0 eventClass:(Class)a1 confidenceThreshold:(float)a2;
- (id)compareWithDetectionTruth:(id)a0 eventClass:(Class)a1 confidenceThreshold:(float)a2 iouThreshold:(float)a3 videoMetric:(BOOL)a4;
- (id)compareWithTrackingTruth:(id)a0 eventClass:(Class)a1 confidenceThreshold:(float)a2 ioaThreshold:(float)a3;
- (id)selectFramesWithRecord:(id)a0 truth:(id)a1 frameResults:(id)a2;
- (id)truthReportFromLegacyClassificationFormat:(id)a0;
- (id)truthReportFromLegacyDetectionFormat:(id)a0;
- (void)writeFragmentFileComparison:(id)a0 eventClass:(Class)a1 outputPath:(id)a2;
- (void)writeHTMLReportComparison:(id)a0 truth:(id)a1 eventClass:(Class)a2 comparisonType:(id)a3 assetPath:(id)a4 outputPath:(id)a5 limit:(unsigned long long)a6 shuffle:(BOOL)a7;
- (void)writeImageCropForEventClass:(Class)a0 outputPath:(id)a1 assetPath:(id)a2;

@end
