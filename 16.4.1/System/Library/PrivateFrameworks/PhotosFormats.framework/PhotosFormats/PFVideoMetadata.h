@class NSString, NSDictionary, AVAsset;

@interface PFVideoMetadata : NSObject {
    AVAsset *_asset;
}

@property (readonly) BOOL isMonoski;
@property (readonly) BOOL isHDR;
@property (readonly) BOOL isPlayable;
@property (readonly) BOOL isDecodable;
@property (readonly) NSString *firstVideoTrackFormatDebugDescription;
@property (readonly) NSDictionary *outOfBandHints;

+ (BOOL)readMetadataType:(unsigned char)a0 fromFileURL:(id)a1 value:(id *)a2 error:(id *)a3;
+ (BOOL)readMetadataType:(unsigned char)a0 fromAVAsset:(id)a1 value:(id *)a2 error:(id *)a3;
+ (BOOL)hasValidMetadataForLoopingVideoAsset:(id)a0;
+ (void)loadMetadataForAsset:(id)a0 completion:(id /* block */)a1;
+ (id)outOfBandHintsBase64StringForAVAssetProxyOrFileURLAsset:(id)a0;
+ (id)urlByAttachingOutOfBandHintsBase64String:(id)a0 toVideoURL:(id)a1;
+ (id)metadataItemsWithMetadataType:(unsigned char)a0 value:(id)a1 error:(id *)a2;
+ (BOOL)videoAssetIsHighDynamicRange:(id)a0;
+ (BOOL)videoAssetIsPlayable:(id)a0;
+ (unsigned int)videoCodecFourCharCodeNumberForAVAsset:(id)a0;
+ (id)_outOfBandHintsForAVAssetProxyOrFileURLAsset:(id)a0;
+ (id)arrayByRemovingMetadataItemOfType:(unsigned char)a0 fromArray:(id)a1 error:(id *)a2;
+ (void)enumerateVideoTrackFormatDescriptionsInAsset:(id)a0 withBlock:(id /* block */)a1;
+ (id)firstVideoTrackFormatDebugDescriptionForAsset:(id)a0;
+ (id)metadataItemValueFromAsset:(id)a0 withKey:(id)a1 keySpace:(id)a2;
+ (id)outOfBandHintsForVideoAsset:(id)a0;
+ (id)quickTimeMetadataItemValueFromAsset:(id)a0 withKey:(id)a1;
+ (id)quickTimeMetadataItemsWithKey:(id)a0 value:(id)a1;
+ (BOOL)videoAssetIsDecodable:(id)a0;
+ (BOOL)videoAssetIsMonoski:(id)a0;
+ (BOOL)videoTrackFormatDescriptionContainsPortraitData:(struct opaqueCMFormatDescription { } *)a0;
+ (BOOL)videoTrackFormatDescriptionIsHighDynamicRange:(struct opaqueCMFormatDescription { } *)a0;

- (void).cxx_destruct;

@end
