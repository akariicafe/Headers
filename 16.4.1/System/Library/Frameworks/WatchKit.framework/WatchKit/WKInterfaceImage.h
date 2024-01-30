@class NSString;

@interface WKInterfaceImage : WKInterfaceObject <WKImageAnimatable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setImageData:(id)a0;
- (void)startAnimating;
- (void)stopAnimating;
- (void)setImage:(id)a0;
- (void)setTintColor:(id)a0;
- (void)setImageNamed:(id)a0;
- (void)startAnimatingWithImagesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 duration:(double)a1 repeatCount:(long long)a2;

@end
