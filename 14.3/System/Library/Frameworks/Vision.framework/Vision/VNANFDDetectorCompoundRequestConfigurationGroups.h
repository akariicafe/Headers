@class NSMutableDictionary;

@interface VNANFDDetectorCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary *_regionOfInterestConfigurations;
}

+ (id)createCompoundConfigurationHashKeyForRequest:(id)a0 compoundRequestRevision:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)configurationForRequest:(id)a0;
- (unsigned long long)count;
- (id)allConfigurations;

@end
