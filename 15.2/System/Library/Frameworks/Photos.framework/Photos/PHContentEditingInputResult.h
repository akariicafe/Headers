@class PHImageResult, PHCompositeMediaResult, NSMutableDictionary, NSURL, NSNumber, PHAdjustmentData;

@interface PHContentEditingInputResult : PHCompositeMediaResult {
    PHAdjustmentData *_adjustmentData;
    PHImageResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    NSMutableDictionary *_flipImageURLs;
    NSMutableDictionary *_flipVideoURLs;
}

@property (nonatomic) BOOL canHandleAdjustmentData;
@property (retain, nonatomic) NSNumber *baseVersionNeeded;
@property (retain, nonatomic) NSURL *overCapturePhotoURL;
@property (retain, nonatomic) NSURL *overCaptureVideoURL;
@property (copy, nonatomic) NSURL *frontSwappingImageRenderURL;
@property (copy, nonatomic) NSURL *backSwappingImageRenderURL;
@property (copy, nonatomic) NSURL *frontSwappingVideoRenderURL;
@property (copy, nonatomic) NSURL *backSwappingVideoRenderURL;
@property (retain, nonatomic) PHAdjustmentData *originalAdjustmentData;

- (id)imageURL;
- (id)imageData;
- (id)uniformTypeIdentifier;
- (id)flipImageURLs;
- (id)flipVideoURLs;
- (void)addFlipImageURL:(id)a0 forAssetResourceType:(long long)a1;
- (void)addFlipVideoURL:(id)a0 forAssetResourceType:(long long)a1;
- (struct CGImage { } *)imageRef;
- (BOOL)containsValidData;
- (id)description;
- (void)setError:(id)a0;
- (void).cxx_destruct;
- (id)errorInfoKey;
- (id)cancelledInfoKey;
- (id)inCloudInfoKey;
- (id)videoAdjustmentData;
- (id)adjustmentData;
- (id)imagePropertiesLoadIfNeeded:(BOOL)a0;
- (id)imageSandboxExtensionToken;
- (id)videoSandboxExtensionToken;
- (id)exifOrientation;
- (id)videoURL;
- (id)error;
- (void)addImageResult:(id)a0;
- (void)addVideoResult:(id)a0;
- (void)mergeInfoDictionaryFromResult:(id)a0;
- (void)addAdjustmentDataResult:(id)a0;
- (void)clearAdjustmentData;

@end
