@class CPImageSet, UIImage;

@interface CPNowPlayingImageButton : CPNowPlayingButton

@property (retain, nonatomic) CPImageSet *imageSet;
@property (readonly, nonatomic) UIImage *image;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithImage:(id)a0 handler:(id /* block */)a1;

@end
