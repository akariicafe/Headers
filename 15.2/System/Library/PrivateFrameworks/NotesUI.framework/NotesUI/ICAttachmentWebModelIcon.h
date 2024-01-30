@class NSURL, UIImage;

@interface ICAttachmentWebModelIcon : NSObject

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL scaleImageToIconSize;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (retain, nonatomic) UIImage *image;

- (id)description;
- (id)initWithImageURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithFallbackURL:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;

@end
