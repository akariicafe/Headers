@class _VNImageAnalyzerMultiDetectorSceneOperationPointsCache;

@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsProvider : NSObject <VNOperationPointsProviding> {
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache *_operationPointsCache;
    unsigned long long _requestRevision;
}

- (void).cxx_destruct;
- (id)operationPointsAndReturnError:(id *)a0;
- (id)initWithOperationPointsCache:(id)a0 requestRevision:(unsigned long long)a1;

@end
