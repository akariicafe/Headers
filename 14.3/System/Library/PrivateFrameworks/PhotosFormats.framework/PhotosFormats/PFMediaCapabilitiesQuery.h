@class NSMutableDictionary;

@interface PFMediaCapabilitiesQuery : NSObject

@property (retain) NSMutableDictionary *capabilitiesInformation;

- (id)initWithOptions:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)gatherCapabilitiesWithOptions:(id)a0;
- (void)addVersion;
- (void)addCodecInformation;
- (void)addHEVCCodecInformationToDictionary:(id)a0;
- (void)addHEIFContainerInformationToDictionary:(id)a0;
- (void)addVendorSpecificInformation;
- (void)addTranscodeChoiceWithOptions:(id)a0;
- (void)addLivePhotoInformationToDictionary:(id)a0;
- (void)addAssetBundleInformationToDictionary:(id)a0;

@end
