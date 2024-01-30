@class AVAsset, NSDictionary, NSArray, NSMutableDictionary;

@interface VCPLightVideoAnalyzer : NSObject {
    unsigned long long _requestedAnalyses;
    AVAsset *_avAsset;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transform;
    NSArray *_metaTracks;
    NSMutableDictionary *_publicMutableResults;
    NSMutableDictionary *_privateMutableResults;
}

@property (readonly, nonatomic) NSDictionary *publicResults;
@property (readonly, nonatomic) NSDictionary *privateResults;

- (void).cxx_destruct;
- (id)findMetaTrackforType:(id)a0;
- (int)processMetaTrackForType:(id)a0 cancel:(id /* block */)a1 flags:(unsigned long long *)a2;
- (int)checkTimeRangeConsistency;
- (int)postProcessOrientationResults;
- (id)initWithAVAsset:(id)a0 forAnalysisTypes:(unsigned long long)a1;
- (int)analyzeAsset:(id /* block */)a0 flags:(unsigned long long *)a1;

@end
