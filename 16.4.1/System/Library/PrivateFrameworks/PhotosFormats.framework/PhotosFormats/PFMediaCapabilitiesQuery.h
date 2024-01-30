@class NSMutableDictionary;

@interface PFMediaCapabilitiesQuery : NSObject

@property (retain) NSMutableDictionary *capabilitiesInformation;

- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)addAssetBundleInformationToDictionary:(id)a0;
- (void)addCodecInformation;
- (void)addCodecSupportInformationToDictionary:(id)a0;
- (void)addHEIFContainerInformationToDictionary:(id)a0;
- (void)addLivePhotoInformationToDictionary:(id)a0;
- (void)addTranscodeChoiceWithOptions:(id)a0;
- (void)addVendorSpecificInformation;
- (void)addVersion;
- (void)addVersion1And2HEVCCodecInformationToDictionary:(id)a0;
- (void)gatherCapabilitiesWithOptions:(id)a0;

@end
