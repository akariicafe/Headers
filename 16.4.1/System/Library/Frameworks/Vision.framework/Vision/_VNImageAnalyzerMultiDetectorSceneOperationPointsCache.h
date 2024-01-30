@class NSMutableDictionary;

@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsCache : NSObject {
    unsigned long long _detectorModel;
    NSMutableDictionary *_originatingRequestSpecifierToOperationPoints;
}

- (void).cxx_destruct;
- (id)initWithDetectorModel:(unsigned long long)a0;
- (id)sceneLabelOperationPointsForOriginatingRequestSpecifier:(id)a0 error:(id *)a1;

@end
