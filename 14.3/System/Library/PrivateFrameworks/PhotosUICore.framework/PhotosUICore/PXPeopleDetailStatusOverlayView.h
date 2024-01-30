@class NSArray, UIImageView, UILabel;

@interface PXPeopleDetailStatusOverlayView : UIView

@property (copy, nonatomic) NSArray *viewConstraints;
@property (readonly, nonatomic) UIImageView *keyAssetImageView;
@property (readonly, nonatomic) UILabel *messageField;
@property (readonly, nonatomic) UILabel *subtitleField;

- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 keyImage:(id)a1 message:(id)a2 subtitleText:(id)a3;
- (double)_imageHeightMultiplier;

@end
