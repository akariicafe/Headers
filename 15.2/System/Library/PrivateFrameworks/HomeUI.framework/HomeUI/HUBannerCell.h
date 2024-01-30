@class UIView, NSString, NSArray, HFItem, UIImageView, UIButton, HUGridStatusBannerCellLayoutOptions, UILabel, HUIconView;
@protocol HUResizableCellDelegate, HUBannerCellDelegate;

@interface HUBannerCell : UICollectionViewCell <UIGestureRecognizerDelegate, HUGridCellProtocol, HUBannerCellProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UILabel *footerViewLabel;
@property (retain, nonatomic) UIButton *continueButton;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (weak, nonatomic) id<HUBannerCellDelegate> delegate;
@property (retain, nonatomic) UIButton *dismissButton;
@property (retain, nonatomic) HUGridStatusBannerCellLayoutOptions *layoutOptions;
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

+ (BOOL)requiresConstraintBasedLayout;
+ (Class)layoutOptionsClass;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)applyLayoutAttributes:(id)a0;
- (void)_dismissButtonTapped:(id)a0;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)layoutOptionsDidChange;
- (BOOL)isCellSizeSubclassSmallPhone;
- (void)setupCustomCellAppearence;
- (void)setBackgroundColor;
- (void)_setupCommonCellAppearance;
- (void)_footerViewTapped:(id)a0;

@end
