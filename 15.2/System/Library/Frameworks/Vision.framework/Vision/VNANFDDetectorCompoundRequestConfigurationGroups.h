@class NSMutableDictionary;

@interface VNANFDDetectorCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary *_regionOfInterestConfigurations;
}

+ (id)createCompoundConfigurationHashKeyForRequest:(id)a0 compoundRequestRevision:(unsigned long long)a1;

- (id)allConfigurations;
- (id)configurationForRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;

@end
