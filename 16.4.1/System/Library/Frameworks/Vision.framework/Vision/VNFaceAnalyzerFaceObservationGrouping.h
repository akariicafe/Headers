@class NSMutableDictionary;

@interface VNFaceAnalyzerFaceObservationGrouping : NSObject {
    NSMutableDictionary *_observationGroupsToRequestMapping;
}

- (id)addToGroupingsRequest:(id)a0 withFaceObservations:(id)a1;
- (void).cxx_destruct;

@end
