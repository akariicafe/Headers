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

- (id)conversionResultForAsset:(id)a0 isVideo:(BOOL)a1 isRender:(BOOL)a2 forceLegacyConversion:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;

@end
