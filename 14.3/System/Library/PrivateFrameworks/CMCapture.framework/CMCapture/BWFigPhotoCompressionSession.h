@class NSString;

@interface BWFigPhotoCompressionSession : NSObject <BWPhotoCompressionSession> {
    struct FigPhotoCompressionSession { } *_photoCompressionSession;
    long long _currentSettingsID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isContainerOpen;
- (int)closeContainer;
- (int)openContainerWithOptions:(id)a0 settingsID:(long long)a1;
- (int)addMainImage:(struct __CVBuffer { } *)a0 metadata:(id)a1 options:(id)a2;
- (int)addThumbnailImage:(struct __CVBuffer { } *)a0 options:(id)a1;
- (int)addCompressedThumbnailImage:(struct __IOSurface { } *)a0 thumbnailImageSize:(unsigned long long)a1 options:(id)a2;
- (int)addAuxImage:(struct __CVBuffer { } *)a0 type:(int)a1 auxImageMetadata:(struct CGImageMetadata { } *)a2 options:(id)a3;
- (int)closeContainerAndCopySurfaceOut:(struct __IOSurface **)a0 surfaceSizeOut:(unsigned long long *)a1;
- (void)dealloc;
- (int)addMetadata:(id)a0;

@end
