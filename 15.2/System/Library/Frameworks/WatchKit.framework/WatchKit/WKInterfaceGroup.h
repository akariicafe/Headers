@class NSString;

@interface WKInterfaceGroup : WKInterfaceObject <WKImageAnimatable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopAnimating;
- (void)setBackgroundImage:(id)a0;
- (void)startAnimating;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setCornerRadius:(double)a0;
- (void)setBackgroundColor:(id)a0;
- (void)startAnimatingWithImagesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 duration:(double)a1 repeatCount:(long long)a2;
- (void)setBackgroundImageData:(id)a0;
- (void)setBackgroundImageNamed:(id)a0;

@end
