@class NSMutableDictionary;

@interface VNFaceAnalyzerCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary *_generalConfigurations;
    NSMutableDictionary *_observationGroupConfigurations;
}

- (id)init;
- (void).cxx_destruct;
- (id)configurationForRequest:(id)a0 withObservationGroup:(id)a1 withCompoundRequestRevision:(unsigned long long)a2;
- (unsigned long long)count;
- (id)allConfigurations;

@end
