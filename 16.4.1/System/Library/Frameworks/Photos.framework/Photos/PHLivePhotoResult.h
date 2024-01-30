@class PHCompositeMediaResult;

@interface PHLivePhotoResult : PHCompositeMediaResult {
    PHCompositeMediaResult *_imageResult;
    PHCompositeMediaResult *_videoResult;
    BOOL _isDegraded;
}

- (id)videoURL;
- (id)exifOrientation;
- (id)imageURL;
- (id)imageData;
- (long long)uiOrientation;
- (id)sanitizedInfoDictionary;
- (BOOL)isPlaceholder;
- (id)uniformTypeIdentifier;
- (struct CGImage { } *)imageRef;
- (void)setDegraded:(BOOL)a0;
- (id)allowedInfoKeys;
- (BOOL)isDegraded;
- (void).cxx_destruct;
- (BOOL)containsValidData;
- (void)addVideoResult:(id)a0;
- (void)_mergeInfoDictionaryFromResult:(id)a0;
- (void)addImageResult:(id)a0;
- (unsigned int)cgOrientation;
- (id)videoAdjustmentData;

@end
