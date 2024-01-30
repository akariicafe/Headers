@class NSString, UIVisualEffectView, SFShadowView, UIView, _SFBarTheme;

@interface SFCapsuleView : UIView {
    UIVisualEffectView *_privateDarkEffectView;
    UIView *_topSeparator;
    UIView *_cachedContentView;
}

@property (class, readonly, nonatomic) NSString *maximumContentSizeCategory;

@property (readonly, nonatomic) UIView *contentContainer;
@property (nonatomic) double backgroundCornerRadius;
@property (copy, nonatomic) NSString *visualEffectGroupName;
@property (readonly, nonatomic) UIVisualEffectView *backgroundView;
@property (readonly, nonatomic) SFShadowView *shadowView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *accessoryView;
@property (copy, nonatomic) NSString *reusableContentViewIdentifier;
@property (copy, nonatomic) id /* block */ contentViewUpdateHandler;
@property (retain, nonatomic) _SFBarTheme *theme;
@property (retain, nonatomic) _SFBarTheme *minimizedTheme;
@property (nonatomic) BOOL forceMinimizedTheme;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) BOOL usesPlatterEffect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameForShadowView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } backgroundInsets;
@property (nonatomic) double minimizedContentHorizontalInset;
@property (nonatomic, setter=setSelected:) BOOL isSelected;
@property (readonly, nonatomic) BOOL isMinimized;
@property (nonatomic) long long state;
@property (nonatomic) double minimizationPercent;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } contentTransform;
@property (nonatomic) unsigned long long directionalCollapsedContentEdge;

- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundFrame;
- (void).cxx_destruct;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)applyTheme;
- (void)willChangeToMinimized:(BOOL)a0 coordinator:(id)a1;
- (void)willReloadWithCoordinator:(id)a0;
- (void)setAccessoryView:(id)a0 coordinator:(id)a1;
- (unsigned long long)_accessoryEdge;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForContent;
- (unsigned long long)_collapsedContenInsetEdge;
- (void)_updateShadowViewTransform;
- (void)_updateContentViewState;
- (void)_updateStateWithContentView:(id)a0;
- (void)_updateAccessoryTheme;
- (BOOL)_usesMinimizedTheme;

@end
