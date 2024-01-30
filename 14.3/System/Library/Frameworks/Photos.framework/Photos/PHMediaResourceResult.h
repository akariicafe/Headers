@class NSData, NSURL, PHAssetResource;

@interface PHMediaResourceResult : PHCompositeMediaResult {
    PHAssetResource *_assetResource;
}

@property (retain, nonatomic) NSData *assetResourceData;
@property (copy, nonatomic) NSURL *assetResourceFileURL;

- (void).cxx_destruct;
- (id)uniformTypeIdentifier;
- (id)adjustmentData;
- (id)mediaMetadata;
- (id)exifOrientation;
- (id)imageURL;
- (id)initWithRequestID:(int)a0 assetResource:(id)a1;
- (BOOL)containsValidData;
- (id)videoURL;

@end
