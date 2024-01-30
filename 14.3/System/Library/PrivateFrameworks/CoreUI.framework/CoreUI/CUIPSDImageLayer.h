@class CUIImage;

@interface CUIPSDImageLayer : CUIPSDLayer {
    CUIImage *_image;
}

@property (readonly, nonatomic) struct CGImage { } *cgImageRef;

- (id)initWithCGImageRef:(struct CGImage { } *)a0;
- (void)dealloc;

@end
