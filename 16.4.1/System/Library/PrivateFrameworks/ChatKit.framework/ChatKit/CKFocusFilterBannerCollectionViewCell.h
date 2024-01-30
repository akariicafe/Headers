@class NSLayoutConstraint, NSString, NSArray, UILabel, UIView, UIButton;
@protocol CKFocusFilterBannerDelegate;

@interface CKFocusFilterBannerCollectionViewCell : UICollectionViewCell

@property (class, readonly, nonatomic) NSString *itemIdentifier;
@property (class, readonly, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) UILabel *focusFilterStateDescriptionLabel;
@property (retain, nonatomic) UIButton *focusFilterToggleButton;
@property (retain, nonatomic) UIView *topKeylineView;
@property (retain, nonatomic) UIView *bottomKeylineView;
@property (retain, nonatomic) NSLayoutConstraint *topKeylineHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomKeylineHeightConstraint;
@property (retain, nonatomic) NSArray *sizeClassDependentConstraints;
@property (retain, nonatomic) NSArray *keylineAlignmentConstraints;
@property (weak, nonatomic) id<CKFocusFilterBannerDelegate> focusFilterBannerDelegate;
@property (nonatomic) BOOL isFocusFilterEnabled;
@property (nonatomic) BOOL useFullWidthKeylines;

- (void)_updateTitle;
- (void)contentSizeCategoryDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateKeylineHeightConstraints;
- (void)_focusFilterToggleButtonSelected:(id)a0;
- (void)_updateFilterToggleButtonConfiguration;
- (void)_updateKeylineAlignmentConstraints;
- (void)_updateSizeClassDependentConstraints;

@end
