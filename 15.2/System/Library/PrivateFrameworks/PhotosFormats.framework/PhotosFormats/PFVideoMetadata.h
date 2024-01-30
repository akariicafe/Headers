@interface PFVideoMetadata : NSObject

+ (BOOL)videoAssetIsHighDynamicRange:(id)a0;
+ (id)metadataItemsWithMetadataType:(unsigned char)a0 value:(id)a1 error:(id *)a2;
+ (BOOL)readMetadataType:(unsigned char)a0 fromAVAsset:(id)a1 value:(id *)a2 error:(id *)a3;
+ (unsigned int)videoCodecFourCharCodeNumberForAVAsset:(id)a0;
+ (id)quickTimeMetadataItemValueFromAsset:(id)a0 withKey:(id)a1;
+ (id)arrayByRemovingMetadataItemOfType:(unsigned char)a0 fromArray:(id)a1 error:(id *)a2;
+ (BOOL)videoAssetIsPlayable:(id)a0;
+ (BOOL)readMetadataType:(unsigned char)a0 fromFileURL:(id)a1 value:(id *)a2 error:(id *)a3;
+ (void)enumerateVideoTrackFormatDescriptionsInAsset:(id)a0 withBlock:(id /* block */)a1;
+ (id)firstVideoTrackFormatDebugDescriptionForAsset:(id)a0;
+ (BOOL)videoAssetIsDecodable:(id)a0;
+ (id)quickTimeMetadataItemsWithKey:(id)a0 value:(id)a1;
+ (BOOL)hasValidMetadataForLoopingVideoAsset:(id)a0;
+ (BOOL)videoTrackFormatDescriptionIsHighDynamicRange:(struct opaqueCMFormatDescription { } *)a0;
+ (id)metadataItemValueFromAsset:(id)a0 withKey:(id)a1 keySpace:(id)a2;
+ (BOOL)videoTrackFormatDescriptionHasDolby8_4Metadata:(struct opaqueCMFormatDescription { } *)a0;
+ (BOOL)videoTrackFormatDescriptionContainsPortraitData:(struct opaqueCMFormatDescription { } *)a0;

@end
