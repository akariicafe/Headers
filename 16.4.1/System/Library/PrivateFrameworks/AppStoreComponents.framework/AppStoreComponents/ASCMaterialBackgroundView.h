@class UIImageView, UIVisualEffectView, NSString;

@interface ASCMaterialBackgroundView : UIView <ASCLockupMediaPresenterBackgroundView>

@property (readonly, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
