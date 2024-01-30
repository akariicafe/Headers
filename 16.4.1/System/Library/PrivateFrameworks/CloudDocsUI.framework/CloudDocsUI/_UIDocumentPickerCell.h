@class UIView, UILongPressGestureRecognizer, NSArray, _UIDocumentPickerDocumentCollectionViewController, UIImageView, NSMutableArray, NSLayoutConstraint, _UIDocumentPickerContainerItem, UILabel, UIProgressView;

@interface _UIDocumentPickerCell : UICollectionViewTableCell

@property (retain, nonatomic) NSLayoutConstraint *thumbnailCenterWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *thumbnailCenterHeightConstraint;
@property (retain, nonatomic) NSArray *gridConstraints;
@property (retain, nonatomic) NSArray *tableConstraints;
@property (retain, nonatomic) NSArray *indentedConstraints;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (nonatomic, getter=isTransitioningLayout) BOOL transitioningLayout;
@property (retain, nonatomic) UIView *indentationHelperView;
@property (retain, nonatomic) NSLayoutConstraint *indentationConstraint;
@property (retain, nonatomic) UIImageView *selectionView;
@property (retain, nonatomic) UIView *selectionViewsThumbnailView;
@property (retain, nonatomic) NSMutableArray *selectionViewConstraints;
@property (retain, nonatomic) UILongPressGestureRecognizer *pickableDiagnosticGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *actionGestureRecognizer;
@property (retain, nonatomic) NSArray *availableActions;
@property (retain, nonatomic) UIView *cachedSelectedBackgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *subtitle2Label;
@property (retain, nonatomic) UILabel *subtitleJoiner;
@property (retain, nonatomic) UIImageView *tagView;
@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) UIProgressView *progressView;
@property (nonatomic) long long cellStyle;
@property (retain, nonatomic) NSArray *actions;
@property (weak, nonatomic) _UIDocumentPickerDocumentCollectionViewController *collectionView;
@property (retain, nonatomic) _UIDocumentPickerContainerItem *item;

+ (id)_subtitleFontForTable:(BOOL)a0;
+ (id)_titleFontForTable:(BOOL)a0;
+ (struct CGSize { double x0; double x1; })defaultSizeForCellStyle:(long long)a0 traitCollection:(id)a1;
+ (struct CGSize { double x0; double x1; })thumbnailSizeForTraits:(id)a0 cellStyle:(long long)a1;

- (void)applyLayoutAttributes:(id)a0;
- (void)setEditing:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (void)_updateFonts;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)didTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (void)willTransitionFromLayout:(id)a0 toLayout:(id)a1;
- (void)_updateSeparatorInset;
- (void)_deleteAction:(id)a0;
- (void)_updateIconSize;
- (void)_activityAction:(id)a0;
- (void)_dynamicTypeSizeChanged:(id)a0;
- (void)_infoAction:(id)a0;
- (void)_moreAction:(id)a0;
- (void)_moveAction:(id)a0;
- (void)_renameAction:(id)a0;
- (void)_showActions:(id)a0;
- (void)_showPickableDiagnostic;
- (void)_udpateLabelAlpha;
- (void)_updateAccessoryType;
- (void)_updateConstraintsForCellStyle;
- (void)_updateSelectionState:(BOOL)a0;
- (void)reloadItem:(BOOL)a0;
- (void)updateActionGestureRecognizer;
- (void)updateForEditingState:(BOOL)a0;

@end
