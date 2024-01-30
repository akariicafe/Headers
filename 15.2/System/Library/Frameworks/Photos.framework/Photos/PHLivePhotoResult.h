@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {
    PHCompositeMediaResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    BOOL _isDegraded;
}

- (id)imageURL;
- (BOOL)isDegraded;
- (void)setDegraded:(BOOL)a0;
- (id)imageData;
- (long long)uiOrientation;
- (id)uniformTypeIdentifier;
- (struct CGImage { } *)imageRef;
- (BOOL)containsValidData;
- (BOOL)isPlaceholder;
- (id)allowedInfoKeys;
- (id)sanitizedInfoDictionary;
- (void).cxx_destruct;
- (void)_mergeInfoDictionaryFromResult:(id)a0;
- (unsigned int)cgOrientation;
- (id)videoAdjustmentData;
- (id)exifOrientation;
- (id)videoURL;
- (void)addImageResult:(id)a0;
- (void)addVideoResult:(id)a0;

@end
