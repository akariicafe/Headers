@class UILabel, NSString, UIButton;
@protocol PUImportAddToAlbumsToolbarViewDelegate;

@interface PUImportAddToAlbumsToolbarView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *destinationLabel;
@property (retain, nonatomic) NSString *destinationCollectionTitle;
@property (readonly, nonatomic) UIButton *destinationButton;
@property (weak, nonatomic) id<PUImportAddToAlbumsToolbarViewDelegate> delegate;

- (BOOL)isAccessibilityElement;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)buttonPressed:(id)a0;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)buttonTouchDown:(id)a0;
- (void)_setupButton;
- (void)_updateButtonText;
- (void)_animateButtonAlpha:(double)a0;
- (void)buttonTouchDragInside:(id)a0;
- (void)buttonTouchDragOutside:(id)a0;
- (void)_setupSubviews;

@end
