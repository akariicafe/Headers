@class NSString;

@interface BWDNGCompressionSession : NSObject <BWPhotoCompressionSession> {
    struct CMPhotoDNGCompressor { } *_dngCompressor;
    long long _currentSettingsID;
    unsigned long long _previewImageSize;
    unsigned long long _auxiliaryImagesSize;
    unsigned long long _containerSize;
}

@property (readonly, nonatomic) unsigned long long auxiliaryImagesSize;
@property (readonly, nonatomic) unsigned long long thumbnailImageSize;
@property (readonly, nonatomic) unsigned long long containerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)addCompressedThumbnailImage:(struct __IOSurface { } *)a0 thumbnailImageSize:(unsigned long long)a1 options:(id)a2;
- (int)addMetadata:(id)a0;
- (int)addThumbnailImage:(struct __CVBuffer { } *)a0 options:(id)a1;
- (int)addAuxImage:(struct __CVBuffer { } *)a0 type:(int)a1 auxImageMetadata:(struct CGImageMetadata { } *)a2 options:(id)a3;
- (int)closeContainer;
- (int)openContainerWithOptions:(id)a0 settingsID:(long long)a1;
- (void)dealloc;
- (int)closeContainerAndCopySurfaceOut:(struct __IOSurface **)a0;
- (int)addMainImage:(struct __CVBuffer { } *)a0 metadata:(id)a1 options:(id)a2;
- (BOOL)isContainerOpen;

@end
