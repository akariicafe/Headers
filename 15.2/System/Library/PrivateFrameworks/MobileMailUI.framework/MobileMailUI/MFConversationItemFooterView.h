@class UIFont, NSString, EMCachingContactStore, UIVisualEffectView, MFMessageDisplayMetrics, UIButton;
@protocol MFMessageFooterViewDelegate;

@interface MFConversationItemFooterView : UIView <_UICursorInteractionDelegate>

@property (class, readonly, nonatomic) UIFont *prefixFont;
@property (class, readonly, nonatomic) UIFont *nameFont;

@property (nonatomic) double defaultRevealActionButtonOriginY;
@property (nonatomic) double defaultSeeMoreButtonOriginY;
@property (retain, nonatomic) EMCachingContactStore *contactStore;
@property (nonatomic) double currentYOffset;
@property (readonly, nonatomic) BOOL shouldHideStickyFooterView;
@property (retain, nonatomic) UIButton *revealActionsButton;
@property (retain, nonatomic) UIButton *seeMoreButton;
@property (copy, nonatomic) NSString *senderName;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (nonatomic, getter=isSeeMoreButtonHidden) BOOL seeMoreButtonHidden;
@property (nonatomic) double seeMoreButtonAlpha;
@property (readonly, nonatomic) double seeMoreButtonHeight;
@property (nonatomic) BOOL messageContainsBlockQuotes;
@property (weak, nonatomic) id<MFMessageFooterViewDelegate> delegate;
@property (retain, nonatomic) MFMessageDisplayMetrics *displayMetrics;
@property (nonatomic) BOOL allowsCursorSnapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)_updateBackgroundView;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (void)_updateButtons;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateSeeMoreButton;
- (void)_fontMetricCacheDidInvalidate:(id)a0;
- (void)layoutActionButtonWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSeeMoreButton;
- (void)moveOriginYByOffset:(double)a0;
- (void)addTarget:(id)a0 action:(SEL)a1 toButton:(long long)a2;
- (void)showAttributionWithSenderName:(id)a0;
- (void)hideAttribution;

@end
