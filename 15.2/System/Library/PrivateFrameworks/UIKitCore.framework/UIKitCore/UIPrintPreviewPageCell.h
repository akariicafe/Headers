@class NSString, UIImageView, UILabel, UIView, UITapGestureRecognizer;
@protocol UIPrintPreviewDelegate;

@interface UIPrintPreviewPageCell : UICollectionViewCell <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *checkmarkImageView;
@property (retain, nonatomic) UIView *checkmarkBackgroundImageView;
@property (retain, nonatomic) UILabel *pageLabel;
@property (retain, nonatomic) UIView *pageLabelAndChekmarkView;
@property (retain, nonatomic) UIView *pageLabelBackgroundBlurView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) id<UIPrintPreviewDelegate> printPrevieweDelegate;
@property (nonatomic) long long pageCount;
@property (nonatomic) double minPageWidth;
@property (nonatomic) long long pageIndex;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)handleTap:(id)a0;
- (long long)pageLabelFormat;
- (id)pageLabelText:(long long)a0;
- (BOOL)locationInTapTargetOfPageLabelBadge:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setInRange:(BOOL)a0 animated:(BOOL)a1;
- (void)addPageLabelAndImageView:(BOOL)a0;
- (void)pageBadgeTapped:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (void)prepareForReuse;

@end
