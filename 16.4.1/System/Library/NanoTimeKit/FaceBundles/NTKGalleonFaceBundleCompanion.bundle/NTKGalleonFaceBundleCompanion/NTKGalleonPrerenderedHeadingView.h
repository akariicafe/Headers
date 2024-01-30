@class NSString, NTKGalleonHeadingImageGenerator, NTKGalleonHeadingGenerator, UIImage, CALayer;

@interface NTKGalleonPrerenderedHeadingView : UIView <NTKGalleonHeadingSettable> {
    NTKGalleonHeadingImageGenerator *_imageGenerator;
    NTKGalleonHeadingGenerator *_headingGenerator;
    UIImage *_headingImage;
    CALayer *_headingLayer;
}

@property (nonatomic) unsigned long long heading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTextColor:(id)a0;
- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)galleon_setHeading:(double)a0;

@end
