@class AVTUINSURL, UIImage, NSURL;

@interface AVTStickerResource : NSObject <AVTCachedResource>

@property (retain, nonatomic) AVTUINSURL *internalURL;
@property (nonatomic, getter=isPrereleaseSticker) BOOL prereleaseSticker;
@property (readonly, nonatomic) UIImage *image;
@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 URL:(id)a1 clippingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
