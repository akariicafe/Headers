@class NSData, NSURL, PHAssetResource;

@interface PHMediaResourceResult : PHCompositeMediaResult {
    PHAssetResource *_assetResource;
}

@property (retain, nonatomic) NSData *assetResourceData;
@property (copy, nonatomic) NSURL *assetResourceFileURL;

- (id)imageURL;
- (id)uniformTypeIdentifier;
- (BOOL)containsValidData;
- (void).cxx_destruct;
- (id)adjustmentData;
- (id)mediaMetadata;
- (id)exifOrientation;
- (id)initWithRequestID:(int)a0 assetResource:(id)a1;
- (id)videoURL;

@end
