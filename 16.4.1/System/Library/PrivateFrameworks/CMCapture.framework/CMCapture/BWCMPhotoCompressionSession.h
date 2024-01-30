@class NSString;

@interface BWCMPhotoCompressionSession : NSObject <BWPhotoCompressionSession> {
    struct CMPhotoCompressionSession { } *_photoCompressionSession;
    long long _currentSettingsID;
    unsigned long long _containerSize;
}

@property (readonly, nonatomic) unsigned long long auxiliaryImagesSize;
@property (readonly, nonatomic) unsigned long long thumbnailImageSize;
@property (readonly, nonatomic) unsigned long long containerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)addMainImage:(struct __CVBuffer { } *)a0 metadata:(id)a1 options:(id)a2;
- (int)addCompressedThumbnailImage:(struct __IOSurface { } *)a0 thumbnailImageSize:(unsigned long long)a1 options:(id)a2;
- (void)dealloc;
- (int)addAuxImage:(struct __CVBuffer { } *)a0 type:(int)a1 auxImageMetadata:(struct CGImageMetadata { } *)a2 options:(id)a3;
- (int)closeContainer;
- (int)addThumbnailImage:(struct __CVBuffer { } *)a0 options:(id)a1;
- (id)init;
- (int)openContainerWithOptions:(id)a0 settingsID:(long long)a1;
- (int)closeContainerAndCopySurfaceOut:(struct __IOSurface **)a0;
- (BOOL)isContainerOpen;
- (int)addMetadata:(id)a0;

@end
