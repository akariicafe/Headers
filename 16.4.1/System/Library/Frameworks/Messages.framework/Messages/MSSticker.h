@class NSData, NSString, CKImageData, NSError, UIImage, NSURL;

@interface MSSticker : NSObject <MSStickerPrivate>

@property (retain, nonatomic) CKImageData *_imageData;
@property (retain, nonatomic) NSError *_stickerError;
@property (retain, nonatomic) UIImage *_thumbnail;
@property (readonly, nonatomic) NSURL *imageFileURL;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)MSStickerPreviewCacheKeyForSticker:(id)a0;
+ (id)stickerWithContentsOfURL:(id)a0 localizedDescription:(id)a1 error:(id *)a2;

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)initWithContentsOfFileURL:(id)a0 localizedDescription:(id)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 data:(id)a1 localizedDescription:(id)a2 error:(id *)a3;
- (void)_generateThumbnail;
- (void)_generateImageData;
- (id)initWithContentsOfURL:(id)a0 localizedDescription:(id)a1 error:(id *)a2;

@end
