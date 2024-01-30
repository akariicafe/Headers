@class NSArray;

@interface TSMaximumTimeIntervalErrorAnalysis : TSTimeErrorAnalysis {
    double *_negativeTimeErrors;
    double *_mtie;
}

@property (readonly, copy, nonatomic) NSArray *mtie;

+ (id)variableName;
+ (id)additionalScriptInitialization;
+ (id)additionalScriptPlots:(id)a0;
+ (id)additionalScriptRecords;
+ (id)plotSize;
+ (id)plotTitle;
+ (id)plotYLabel;
+ (id)plotYLimits:(id)a0;

- (void)dealloc;
- (BOOL)exportTimeErrorsToDirectoryURL:(id)a0;
- (void)_performAnalysisFromWindowSize:(long long)a0 toWindowSize:(long long)a1 stepSize:(long long)a2;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0;
- (BOOL)exportAnalysisToDirectoryURL:(id)a0 withFilename:(id)a1 fromStartWindowSize:(long long)a2 toEndWindowSize:(long long)a3 stepSize:(long long)a4;
- (id)initWithTimeErrorValues:(id)a0;
- (id)mtie;
- (id)mtieFromStartWindowSize:(long long)a0 toEndWindowSize:(long long)a1 stepSize:(long long)a2;

@end
