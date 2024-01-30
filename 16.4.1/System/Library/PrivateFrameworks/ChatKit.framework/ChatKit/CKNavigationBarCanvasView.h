@class UIView, UIMenu, NSString, UIImageView, UIButton, CKNavigationButtonView, NSMutableArray, UIContextMenuInteraction, UIColor;
@protocol CKNavigationBarCanvasViewDelegate;

@interface CKNavigationBarCanvasView : UIView <UIContextMenuInteractionDelegate>

@property (retain, nonatomic) CKNavigationButtonView *buttonViewFaceTimeAudio;
@property (retain, nonatomic) CKNavigationButtonView *buttonViewFaceTimeVideo;
@property (retain, nonatomic) CKNavigationButtonView *buttonViewInfo;
@property (retain, nonatomic) NSMutableArray *buttonsToDisplay;
@property (retain, nonatomic) UIImageView *statusIndicatorImageView;
@property (nonatomic) BOOL isTearingDownButtonViews;
@property (nonatomic) BOOL isAnimatingAvatars;
@property (nonatomic) BOOL ignoreNextWidthChange;
@property (retain, nonatomic) UIButton *invisibleContextMenuButton;
@property (retain, nonatomic) UIContextMenuInteraction *secondaryTitleInteraction;
@property (retain, nonatomic) UIColor *titleDefaultBackgroundColor;
@property (weak, nonatomic) id<CKNavigationBarCanvasViewDelegate> delegate;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIView *leftItemView;
@property (retain, nonatomic) UIView *rightItemView;
@property (nonatomic) double preferredHeight;
@property (nonatomic) BOOL enforceLeftItemViewsAlignmentToCenter;
@property (nonatomic) BOOL keepTitleViewCentered;
@property (nonatomic) BOOL isBusinessChat;
@property (nonatomic) BOOL videoEnabled;
@property (nonatomic) BOOL audioEnabled;
@property (nonatomic) BOOL expanseEnabled;
@property (nonatomic) BOOL shouldAnimateAvatarLayoutChanges;
@property (nonatomic) BOOL isInEditingMode;
@property (nonatomic) BOOL isShowingControls;
@property (nonatomic) BOOL multiwayAudioButtonHidden;
@property (nonatomic) long long statusIndicatorType;
@property (nonatomic) long long joinButtonStyle;
@property (retain, nonatomic) UIMenu *titleViewContextMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)minHeight;
+ (double)maxHeight;
+ (double)heightWithButtonViews;
+ (double)heightWithButtonViewsContactless;
+ (double)heightWithoutButtonViewsContactless;
+ (double)preferredLandscapeHeightForCompactWidth;
+ (double)preferredLandscapeHeightForRegularWidth;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)_addLaserEffectToButton:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_calculateFrameForButton:(id)a0 shouldOffset:(BOOL)a1;
- (double)_calculateYOriginForButtonWithHeight:(double)a0;
- (BOOL)_canShowAvatarView;
- (void)_setupButtonContainer;
- (void)_tearDownButtonContainer;
- (void)_updateJoinButtonStyle;
- (void)clearAllItemViews;
- (void)didHoverOverTitleView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 preferredHeight:(double)a1;
- (void)layoutTitleViewIfNeeded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeButtonViewsIfNeeded;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })systemMinimumLayoutMarginsFromDelegate;

@end
