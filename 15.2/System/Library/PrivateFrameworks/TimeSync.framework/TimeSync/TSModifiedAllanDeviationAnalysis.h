@class NSArray;

@interface TSModifiedAllanDeviationAnalysis : TSTimeErrorAnalysis {
    double *_madev;
}

@property (readonly, copy, nonatomic) NSArray *madev;

+ (id)variableName;
+ (id)plotYLabel;
+ (id)plotTitle;
+ (id)plotSize;

- (id)madev;
- (void)dealloc;
- (long long)analysisLimit;
- (long long)threadingLimit;
- (void)_performAnalysisFromWindowSize:(long long)a0 toWindowSize:(long long)a1 stepSize:(long long)a2;
- (long long)threadingSegment;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0 withFilename:(id)a1 fromStartWindowSize:(long long)a2 toEndWindowSize:(long long)a3 stepSize:(long long)a4;
- (id)initWithTimeErrorValues:(id)a0;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)a0;
- (id)madevFromStartWindowSize:(long long)a0 toEndWindowSize:(long long)a1 stepSize:(long long)a2;

@end
