@class NCNotificationAction, NSString, UIBezierPath, UILabel, BSUIFontProvider, MTMaterialView;

@interface NCNotificationListCellActionButton : UIControl <NCNotificationOptionsMenuPresenter, PLContentSizeCategoryAdjusting, MTMaterialGrouping>

@property (retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (retain, nonatomic) NCNotificationAction *notificationAction;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long backgroundMaterialRecipe;
@property (readonly, copy, nonatomic) UIBezierPath *visiblePathForPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (void)_layoutTitleLabel;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (void)_updateTitleLabelFont;
- (void)setHighlighted:(BOOL)a0;
- (void)_configureBackgroundViewIfNecessary;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)_configureTitleLabelIfNecessary;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_handleHoverGestureRecognizerEvent:(id)a0;
- (void)_layoutBackgroundView;
- (void)_highlightButton:(id)a0;
- (void)_unHighlightButton:(id)a0;
- (long long)_wordCountForText:(id)a0;
- (void)_configureTitleLabelEffects;

@end
