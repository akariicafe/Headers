@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {
    PHCompositeMediaResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    BOOL _isDegraded;
}

- (id)imageData;
- (id)sanitizedInfoDictionary;
- (void).cxx_destruct;
- (struct CGImage { } *)imageRef;
- (id)allowedInfoKeys;
- (id)uniformTypeIdentifier;
- (BOOL)isPlaceholder;
- (BOOL)isDegraded;
- (unsigned int)cgOrientation;
- (id)videoAdjustmentData;
- (void)_mergeInfoDictionaryFromResult:(id)a0;
- (void)addImageResult:(id)a0;
- (void)addVideoResult:(id)a0;
- (void)setDegraded:(BOOL)a0;
- (id)exifOrientation;
- (id)imageURL;
- (BOOL)containsValidData;
- (id)videoURL;
- (long long)uiOrientation;

@end
