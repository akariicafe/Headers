@class NSString, BlastDoorPreviewImageEncodedImageWrapper;

@interface BlastDoorPreviewImage : NSObject {
    void /* unknown type, empty encoding */ previewImage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorPreviewImageEncodedImageWrapper *encodedImage;
@property (nonatomic, readonly) long long frameCount;
@property (nonatomic, readonly) BOOL isScreenshot;

- (id)init;
- (void).cxx_destruct;

@end
