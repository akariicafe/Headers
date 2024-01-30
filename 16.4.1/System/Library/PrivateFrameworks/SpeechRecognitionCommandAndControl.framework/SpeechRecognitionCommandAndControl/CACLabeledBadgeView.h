@class NSString, UIImageView, CACAdaptiveBackdropView, UILabel;

@interface CACLabeledBadgeView : UIView

@property (retain, nonatomic) UIImageView *badgeMaskImageView;
@property (retain, nonatomic) CACAdaptiveBackdropView *_backdropView;
@property (retain, nonatomic) UILabel *_labelView;
@property (nonatomic) BOOL isContrastBackdrop;
@property (readonly) NSString *label;
@property (readonly) long long arrowOrientation;
@property (readonly) long long badgePresentation;

+ (id)_badgeFont;
+ (id)imageBundle;
+ (id)_badgeFontTextStyle;
+ (id)_badgeImageWithNoArrowAndBorder;
+ (id)_badgeImageWithNoArrow;
+ (id)_badgeImageWithRightArrow;
+ (id)_badgeImageWithTinyRightArrow;
+ (double)_heightForBadgeWithText;
+ (id)_maskImageForBadgePresentation:(long long)a0 arrowOrientation:(long long)a1;
+ (double)badgeFontSize;
+ (struct CGSize { double x0; double x1; })sizeOfBadgeGivenNumberOfDisplayedDigits:(long long)a0 arrowOrientation:(long long)a1 badgePresentation:(long long)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)copy;
- (void)_setUpSubviews;
- (void).cxx_destruct;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 label:(id)a1 arrowOrientation:(long long)a2 badgePresentation:(long long)a3 isContrasted:(BOOL)a4;
- (id)contrastedCopy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 label:(id)a1 arrowOrientation:(long long)a2 badgePresentation:(long long)a3;

@end
