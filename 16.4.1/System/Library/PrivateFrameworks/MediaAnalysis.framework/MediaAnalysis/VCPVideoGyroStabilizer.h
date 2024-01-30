@class NSArray, NSMutableDictionary;

@interface VCPVideoGyroStabilizer : VCPVideoStabilizer {
    NSMutableDictionary *_analysisDict;
    NSArray *_metadata;
    struct CGSize { double width; double height; } _cropSize;
}

- (void).cxx_destruct;
- (int)convertAnalysisResult;
- (id)initWithMetadata:(id)a0 sourceSize:(struct CGSize { double x0; double x1; })a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)storeAnalytics:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 isLivePhoto:(BOOL)a1;

@end
