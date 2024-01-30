@class UIStackView, HFItem, UIView, NSString, HUDownloadControl, NSLayoutConstraint, HUExpandableTextView, UILabel;
@protocol HUResizableCellDelegate, HULockupInternalResizingDelegate, HULockupViewDelegate;

@interface HULockupView : UIView <HUCellProtocol, HUExpandableTextViewDelegate>

@property (weak, nonatomic) id<HULockupInternalResizingDelegate> internalViewResizingDelegate;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *secondaryDetailLabel;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (nonatomic) unsigned long long iconSize;
@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) HUDownloadControl *downloadControl;
@property (retain, nonatomic) HUExpandableTextView *descriptionExpandableTextView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSLayoutConstraint *downloadControlTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *downloadControlCenterYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *downloadControlWidthConstraint;
@property (weak, nonatomic) id<HULockupViewDelegate> delegate;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_buttonTapped:(id)a0;
- (double)_maxPossibleTitleLengthForDownloadControl;
- (void)expandableTextViewDidCollapse:(id)a0;
- (void)expandableTextViewDidExpand:(id)a0;
- (id)initializeIconViewWithSize:(unsigned long long)a0;
- (void)resetDownloadControlVerticalConstraint;
- (void)updateDescriptionExpandableTextView:(id)a0 animate:(BOOL)a1;
- (void)updateIconView:(id)a0 animate:(BOOL)a1;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
