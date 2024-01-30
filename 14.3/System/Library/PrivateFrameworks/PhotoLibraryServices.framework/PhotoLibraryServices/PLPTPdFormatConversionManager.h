@class PFMediaCapabilities, NSMutableDictionary, NSString, NSURL, PHMediaFormatConversionManager;

@interface PLPTPdFormatConversionManager : NSObject <PLPTPConversionSupport> {
    PFMediaCapabilities *_legacyCapabilities;
}

@property (retain) PHMediaFormatConversionManager *mediaFormatConversionManager;
@property (retain) NSURL *temporaryDirectoryURL;
@property (retain) NSMutableDictionary *convertedLivePhotoPairingIdentifiersByOriginalIdentifiers;
@property BOOL initialized;
@property (retain) PFMediaCapabilities *peerMediaCapabilities;
@property (readonly, nonatomic) BOOL penultimateIsPublic;
@property (readonly, nonatomic) BOOL peerSupportsTranscodeChoice;
@property (readonly, nonatomic) BOOL peerSupportsAdjustmentBaseResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)assetReaderForFormatConvertedPTPAsset:(id)a0 ofManagedAsset:(id)a1 path:(id)a2;
- (BOOL)generatePosterFrameExportForVideoURL:(id)a0 outputData:(id *)a1 maximumSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;
- (id)conversionResultForAsset:(id)a0 isVideo:(BOOL)a1 isRender:(BOOL)a2 forceLegacyConversion:(BOOL)a3;
- (BOOL)setupTemporaryDirectory;
- (id)requestForOriginalAtPath:(id)a0 isVideo:(BOOL)a1 imageDimensions:(struct CGSize { double x0; double x1; })a2 originalPairingIdentifier:(id)a3;
- (id)requestForRenderImagePath:(id)a0 imageDimensions:(struct CGSize { double x0; double x1; })a1 outputFilename:(id)a2;
- (id)requestForPath:(id)a0 isVideo:(BOOL)a1 imageDimensions:(struct CGSize { double x0; double x1; })a2;
- (id)sourceForPath:(id)a0 isVideo:(BOOL)a1 imageDimensions:(struct CGSize { double x0; double x1; })a2;
- (id)convertedAssetLivePhotoPairingIdentifierForOriginalIdentifier:(id)a0;
- (id)effectivePeerMediaCapabilites;
- (void)dealloc;
- (void)invalidate;

@end
