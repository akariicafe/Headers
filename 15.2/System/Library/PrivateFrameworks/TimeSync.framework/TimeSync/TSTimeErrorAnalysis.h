@interface TSTimeErrorAnalysis : NSObject

@property (readonly, nonatomic) long long numberOfErrors;
@property (readonly, nonatomic) double *timestamps;
@property (readonly, nonatomic) double *timeErrors;
@property (readonly, nonatomic) double averagePeriod;
@property (readonly, nonatomic) BOOL calculated;
@property (readonly, nonatomic) long long lowestWindowSize;
@property (readonly, nonatomic) long long highestWindowSize;
@property (readonly, nonatomic) long long calculatedStepSize;
@property (readonly, nonatomic) long long analysisLimit;
@property (readonly, nonatomic) long long threadingLimit;
@property (readonly, nonatomic) long long threadingSegment;

+ (id)variableName;
+ (id)additionalScriptInitialization;
+ (id)additionalScriptRecords;
+ (id)additionalScriptPlots:(id)a0;
+ (id)plotYLabel;
+ (id)plotTitle;
+ (id)plotYLimits:(id)a0;
+ (id)plotSize;
+ (id)keyPathsForValuesAffectingAnalysisLimit;
+ (id)generatePythonScriptWithOutputPath:(id)a0 fileName:(id)a1 titleName:(id)a2 plotPath:(id)a3 showPlot:(BOOL)a4;

- (void)dealloc;
- (void)performAnalysisWithThreadingOption:(long long)a0;
- (long long)analysisLimit;
- (void)performAnalysisFromStartWindowSize:(long long)a0 toEndWindowSize:(long long)a1 stepSize:(long long)a2 withThreadingOption:(long long)a3;
- (long long)threadingLimit;
- (void)_performAnalysisFromWindowSize:(long long)a0 toWindowSize:(long long)a1 stepSize:(long long)a2;
- (long long)threadingSegment;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0 withFilename:(id)a1;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0 withFilename:(id)a1 fromStartWindowSize:(long long)a2 toEndWindowSize:(long long)a3 stepSize:(long long)a4;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)a0 withFilename:(id)a1;
- (id)initWithTimeErrorValues:(id)a0;
- (void)performAnalysis;
- (void)performAnalysisFromStartWindowSize:(long long)a0 toEndWindowSize:(long long)a1 stepSize:(long long)a2;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)a0;

@end
