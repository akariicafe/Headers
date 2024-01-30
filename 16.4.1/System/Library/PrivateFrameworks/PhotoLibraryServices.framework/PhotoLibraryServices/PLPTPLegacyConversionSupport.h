@class NSString, PFMediaCapabilities, PHMediaFormatConversionManager;

@interface PLPTPLegacyConversionSupport : NSObject <PLPTPConversionSupport> {
    PHMediaFormatConversionManager *_mediaFormatConversionManager;
    PFMediaCapabilities *_peerMediaCapabilities;
}

@property (readonly, nonatomic) BOOL penultimateIsPublic;
@property (readonly, nonatomic) BOOL peerSupportsTranscodeChoice;
@property (readonly, nonatomic) BOOL peerSupportsAdjustmentBaseResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)conversionResultForAsset:(id)a0 sourceHints:(id)a1 forceLegacyConversion:(BOOL)a2 assetTypeLabel:(id)a3;

@end
