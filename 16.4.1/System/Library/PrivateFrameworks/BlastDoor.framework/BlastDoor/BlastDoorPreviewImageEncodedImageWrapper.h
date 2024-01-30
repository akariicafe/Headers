@class NSString, BlastDoorPreviewImage_EncodedBitmap, BlastDoorPreviewImage_EncodedAstc;

@interface BlastDoorPreviewImageEncodedImageWrapper : NSObject {
    void /* unknown type, empty encoding */ previewImage_EncodedImage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) BlastDoorPreviewImage_EncodedBitmap *bitmap;
@property (nonatomic, readonly) BlastDoorPreviewImage_EncodedAstc *astc;

- (id)init;
- (void).cxx_destruct;

@end
