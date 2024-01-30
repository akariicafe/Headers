@class NSMutableDictionary;

@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsCache : NSObject {
    unsigned long long _detectorModel;
    NSMutableDictionary *_sceneLabelOperationPointsForRequestRevision;
}

- (void).cxx_destruct;
- (id)sceneLabelOperationPointsForRequestRevision:(unsigned long long)a0 error:(id *)a1;
- (id)initWithDetectorModel:(unsigned long long)a0;

@end
