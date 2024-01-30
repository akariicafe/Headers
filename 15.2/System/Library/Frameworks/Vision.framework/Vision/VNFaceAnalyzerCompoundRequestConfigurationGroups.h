@class NSMutableDictionary;

@interface VNFaceAnalyzerCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary *_generalConfigurations;
    NSMutableDictionary *_observationGroupConfigurations;
}

- (id)allConfigurations;
- (id)configurationForRequest:(id)a0 withObservationGroup:(id)a1 compoundRequestRevision:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;

@end
