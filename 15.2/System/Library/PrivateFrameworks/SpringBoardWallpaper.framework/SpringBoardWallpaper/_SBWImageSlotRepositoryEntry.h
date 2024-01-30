@class NSURL, UIImage, IOSurface;

@interface _SBWImageSlotRepositoryEntry : NSObject {
    struct CGImageBlockSet { } *_blockSet;
    IOSurface *_ioSurface;
}

@property (copy, nonatomic) NSURL *url;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) long long actualStyle;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) IOSurface *ioSurface;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_setBlockSet:(struct CGImageBlockSet { } *)a0;

@end
