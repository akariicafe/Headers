@class NCNotificationAction, NSString, UILabel, BSUIFontProvider, MTMaterialView;

@interface NCNotificationListCellActionButton : UIControl <PLContentSizeCategoryAdjusting, MTMaterialGrouping>

@property (retain, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MTMaterialView *backgroundView;
@property (retain, nonatomic) NCNotificationAction *notificationAction;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long backgroundMaterialRecipe;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (BOOL)adjustForContentSizeCategoryChange;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;
- (void)_configureTitleLabelIfNecessary;
- (void)_configureBackgroundViewIfNecessary;
- (void)layoutSubviews;
- (void)_updateTitleLabelFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutTitleLabel;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_handleHoverGestureRecognizerEvent:(id)a0;
- (void)_highlightButton:(id)a0;
- (void)_unHighlightButton:(id)a0;
- (void)_layoutBackgroundView;
- (long long)_wordCountForText:(id)a0;
- (void)_configureTitleLabelEffects;

@end
