@class NSDictionary, NSMutableArray;

@interface VCPVideoStabilizer : VCPVideoAnalyzer

@property (nonatomic) void *analysisResultRef;
@property (nonatomic) void *correctionResultRef;
@property (retain, nonatomic) NSDictionary *results;
@property (nonatomic) float cropFraction;
@property (retain, nonatomic) NSMutableArray *motionBlurVector;
@property (nonatomic) BOOL gyroStabilization;
@property (nonatomic) float analysisConfidence;
@property (nonatomic) BOOL validStabilization;

+ (BOOL)saveStabilizationRecipe;
+ (id)videoStabilizerforAnalysisType:(unsigned long long)a0 withMetadata:(id)a1 sourceSize:(struct CGSize { double x0; double x1; })a2 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (int)convertAnalysisResult;

@end
