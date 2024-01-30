@class NSMutableDictionary;

@interface VNANFDDetectorCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary *_regionOfInterestConfigurations;
}

+ (id)createCompoundConfigurationHashKeyForRequest:(id)a0 compoundRequestRevision:(unsigned long long)a1;

- (id)allConfigurations;
- (unsigned long long)count;
- (id)configurationForRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
