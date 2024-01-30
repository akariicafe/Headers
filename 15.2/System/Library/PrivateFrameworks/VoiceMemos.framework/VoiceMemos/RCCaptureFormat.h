@interface RCCaptureFormat : NSObject

+ (id)fileExtensionForAssetExport;
+ (id)AVAssetAuthoringMetadataWithComposition:(id)a0;
+ (void)AVAssetExportDetermineSettingsForExportingAsset:(id)a0 inputFormat:(unsigned int)a1 preferredOutputExtension:(id)a2 preferredFormat:(unsigned int)a3 completionHandler:(id /* block */)a4;
+ (void)_AVAssetExportDetermineSettingsForExportingAsset:(id)a0 inputFormat:(unsigned int)a1 outputExtensionWithFallbacks:(id)a2 preferredFormat:(unsigned int)a3 completionHandler:(id /* block */)a4;
+ (id)AVAssetAuthoringMetadataWithCreationDate:(id)a0 title:(id)a1 uniqueID:(id)a2 musicMemoMetadata:(id)a3;
+ (id)AVAssetExportPresetForExportingToExtension:(id)a0 preferredFormat:(unsigned int)a1;
+ (id)AVAssetAuthoringMetadataWithRecordingMetadata:(id)a0;
+ (id)AVAssetAuthoringMetadataWithCreationDate:(id)a0 title:(id)a1 uniqueID:(id)a2;
+ (id)fileFormatsDirectlyImportable;
+ (id)AVMediaTypeForFileExtension:(id)a0;
+ (id)fileExtensionsSupported;
+ (id)fileExtensionForIntermediateAssetCapture;
+ (id)AVFileTypeUTIForFileExtension:(id)a0;

@end
