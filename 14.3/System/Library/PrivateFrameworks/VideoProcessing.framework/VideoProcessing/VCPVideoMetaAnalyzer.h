@class NSDictionary;

@interface VCPVideoMetaAnalyzer : NSObject

@property (readonly, retain, nonatomic) NSDictionary *publicResults;
@property (readonly, retain, nonatomic) NSDictionary *privateResults;

+ (id)analyzerForTrackType:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 requestAnalyses:(unsigned long long)a2 formatDescription:(struct opaqueCMFormatDescription { } *)a3;

- (int)finalizeAnalysis;
- (int)processMetadataGroup:(id)a0 flags:(unsigned long long *)a1;

@end
