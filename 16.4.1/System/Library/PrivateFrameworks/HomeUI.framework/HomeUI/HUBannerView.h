@class HUGridBannerCellLayoutOptions, UIView, NSArray, NSString, HFItem, UIImageView, UIButton, UILabel, HUIconView;
@protocol HUResizableCellDelegate, HUBannerViewDelegate;

@interface HUBannerView : UIView <UIGestureRecognizerDelegate, UITextViewDelegate, HUGridCellProtocol>

@property (weak, nonatomic) id<HUBannerViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UILabel *footerViewLabel;
@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) UIButton *continueButton;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (retain, nonatomic) HUGridBannerCellLayoutOptions *layoutOptions;
@property (nonatomic) BOOL disableHighlighting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=areCellContentsHidden) BOOL cellContentsHidden;
@property (nonatomic, getter=isRearranging) BOOL rearranging;
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled;
@property (nonatomic) double pointerRegionMargin;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;

+ (Class)layoutOptionsClass;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_dismissButtonTapped:(id)a0;
- (void)_footerViewTapped:(id)a0;
- (void)_subclass_updateConstraints;
- (void)layoutOptionsDidChange;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
