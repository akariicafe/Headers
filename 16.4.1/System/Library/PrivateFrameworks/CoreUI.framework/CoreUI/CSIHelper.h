@class _CSIRenditionBlockData, NSString, NSData, _CUIThemePixelRendition;

@interface CSIHelper : NSObject {
    struct _slice { unsigned int x; unsigned int y; unsigned int width; unsigned int height; } slice;
    NSData *csiData;
    struct _csibitmap { unsigned int x0; union { unsigned int x0; struct _csibitmapflags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned int x2 : 30; } x1; } x1; unsigned int x2; unsigned int x3; unsigned char x4[0]; } *bmp;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } renditionLock;
    _CUIThemePixelRendition *rendition;
    _CSIRenditionBlockData *sharedBlockDataBGRX;
    _CSIRenditionBlockData *sharedBlockDataRGBX;
    _CSIRenditionBlockData *sharedBlockDataGray;
    _CSIRenditionBlockData *retainedBlockData;
    NSString *blockDataCacheKeyBGRX;
    NSString *blockDataCacheKeyRGBX;
    NSString *blockDataCacheKeyGray;
    unsigned long long sourceRowbytes;
    unsigned char shouldCache : 1;
    unsigned char usedForDataProvider : 1;
    unsigned int _reserved : 30;
}

- (void)dealloc;

@end
