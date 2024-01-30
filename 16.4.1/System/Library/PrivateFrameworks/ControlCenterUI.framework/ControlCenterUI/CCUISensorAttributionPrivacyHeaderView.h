@class UIImageView, UILabel;

@interface CCUISensorAttributionPrivacyHeaderView : SBFView <CCUISensorAttributionViewAnimating>

@property (retain, nonatomic) UIImageView *handImageView;
@property (retain, nonatomic) UILabel *staticPrivacyHeaderLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedExpandedRect;

- (void)sizeToFit;
- (void)setBlurRadius:(double)a0;
- (id)_imageSymbolConfiguration;
- (id)_filledPrivacyHandImage;
- (id)init;
- (void).cxx_destruct;

@end
