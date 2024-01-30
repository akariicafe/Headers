@class TSDFrameSpec;

@interface TSDFrameImageCacheEntry : NSObject {
    struct CGImage *mImages[4];
}

@property (nonatomic) TSDFrameSpec *frameSpec;
@property (nonatomic) double assetScale;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double viewScale;

- (void)dealloc;
- (struct CGImage { } *)newImageForCALayer:(BOOL)a0 mask:(BOOL)a1;
- (void)setImage:(struct CGImage { } *)a0 forCALayer:(BOOL)a1 mask:(BOOL)a2;

@end
