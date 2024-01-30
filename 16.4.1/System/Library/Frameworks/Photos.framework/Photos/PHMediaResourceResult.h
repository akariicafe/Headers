@class NSData, NSURL, PHAssetResource;

@interface PHMediaResourceResult : PHCompositeMediaResult {
    PHAssetResource *_assetResource;
}

@property (retain, nonatomic) NSData *assetResourceData;
@property (copy, nonatomic) NSURL *assetResourceFileURL;

- (id)videoURL;
- (id)exifOrientation;
- (id)imageURL;
- (id)sanitizedInfoDictionary;
- (id)uniformTypeIdentifier;
- (id)allowedInfoKeys;
- (void).cxx_destruct;
- (BOOL)containsValidData;
- (id)adjustmentData;
- (id)initWithRequestID:(int)a0 assetResource:(id)a1;
- (id)mediaMetadata;

@end
