@class NSMutableArray;

@interface VCPVideMetaOrientationAnalyzer : VCPVideoMetaAnalyzer {
    NSMutableArray *_results;
}

- (void).cxx_destruct;
- (id)init;
- (id)privateResults;
- (int)processMetadataGroup:(id)a0 flags:(unsigned long long *)a1;

@end
