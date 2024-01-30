@class UTType;

@interface PLPTPConversionSourceHints : NSObject {
    UTType *_livePhotoImageContentType;
}

@property (readonly) BOOL isVideo;
@property (readonly) BOOL isRender;
@property (readonly) BOOL isLivePhoto;
@property (readonly) BOOL livePhotoImageIsHEIC;

+ (id)hintsForAsset:(id)a0 isVideo:(BOOL)a1 isRender:(BOOL)a2;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 isVideo:(BOOL)a1 isRender:(BOOL)a2;

@end
