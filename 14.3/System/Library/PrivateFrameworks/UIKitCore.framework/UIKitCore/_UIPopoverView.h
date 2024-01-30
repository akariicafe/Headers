@class UIColor, UIActionSheet, UIPopoverController, UIView, UIPopoverBackgroundView, UIImageView;

@interface _UIPopoverView : UIView {
    UIView *_contentView;
    UIPopoverBackgroundView *_backgroundView;
    Class _backgroundViewClass;
    UIImageView *_toolbarShine;
}

@property (nonatomic) BOOL showsBackgroundComponentHighlights;
@property (nonatomic) BOOL showsBackgroundViewHighlight;
@property (nonatomic) BOOL showsContentViewHighlight;
@property (readonly, nonatomic) BOOL contentExtendsOverArrow;
@property (nonatomic) double arrowOffset;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) long long backgroundStyle;
@property (copy, nonatomic) UIColor *popoverBackgroundColor;
@property (copy, nonatomic) UIColor *arrowBackgroundColor;
@property (nonatomic) BOOL chromeHidden;
@property (retain, nonatomic) UIActionSheet *presentedActionSheet;
@property (nonatomic) UIPopoverController *popoverController;

+ (id)popoverViewContainingView:(id)a0;

- (int)_style;
- (id)_traitCollectionForChildEnvironment:(id)a0;
- (void)_setCornerRadius:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundViewClass:(Class)a1 embeddedInView:(BOOL)a2 contentExtendsOverArrow:(BOOL)a3;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)backgroundView;
- (void)setUseToolbarShine:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundViewClass:(Class)a1;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowOffset:(double)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_setPopoverContentView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_snapshotBounds;
- (void)_hideArrow;
- (void)_showArrow;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsForContentView;
- (id)_normalInheritedTintColor;
- (BOOL)_needsLayoutOnAnimatedFrameChangeForNewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)_definesTintColor;
- (id)contentView;
- (void)traitCollectionDidChange:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)standardChromeView;
- (void)_layoutToolbarShine;
- (void)_performBlockCheckingDefinesTintColor:(id /* block */)a0;
- (id)toolbarShine;
- (BOOL)_allowsCustomizationOfContent;

@end
