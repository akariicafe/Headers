@interface RCCaptureFormat : NSObject

+ (id)fileExtensionForIntermediateAssetCapture;
+ (void)AVAssetExportDetermineSettingsForExportingAsset:(id)a0 inputFormat:(unsigned int)a1 preferredOutputExtension:(id)a2 preferredFormat:(unsigned int)a3 completionHandler:(id /* block */)a4;
+ (id)fileExtensionForAssetExport;
+ (void)_AVAssetExportDetermineSettingsForExportingAsset:(id)a0 inputFormat:(unsigned int)a1 outputExtensionWithFallbacks:(id)a2 preferredFormat:(unsigned int)a3 completionHandler:(id /* block */)a4;
+ (id)fileExtensionsSupported;
+ (id)AVMediaTypeForFileExtension:(id)a0;
+ (id)AVAssetExportPresetForExportingToExtension:(id)a0 preferredFormat:(unsigned int)a1;
+ (id)AVAssetAuthoringMetadataWithComposition:(id)a0;
+ (id)AVFileTypeUTIForFileExtension:(id)a0;
+ (id)AVAssetAuthoringMetadataWithRecordingMetadata:(id)a0;
+ (id)AVAssetAuthoringMetadataWithCreationDate:(id)a0 title:(id)a1 uniqueID:(id)a2;
+ (id)AVAssetAuthoringMetadataWithCreationDate:(id)a0 title:(id)a1 uniqueID:(id)a2 musicMemoMetadata:(id)a3;
+ (id)fileFormatsDirectlyImportable;

@end
