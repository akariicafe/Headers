@class TLKAppearance, NSString, UIView;
@protocol TLKObserver;

@interface TLKView : UIView <TLKObserver, TLKObservable>

@property (readonly) UIView *leadingTextView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) TLKAppearance *tlkAppearance;
@property (readonly) BOOL usesDefaultLayoutMargins;
@property (nonatomic) long long batchUpdateCount;
@property (weak) id<TLKObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;
+ (void)makeContainerShadowCompatible:(id)a0;
+ (void)enableLightKeylineStroke:(BOOL)a0 forView:(id)a1;
+ (void)enableShadow:(BOOL)a0 forView:(id)a1;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultLayoutMargins;

- (void)layoutMarginsDidChange;
- (void)performBatchUpdates:(id /* block */)a0;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })effectiveLayoutMargins;
- (void)layoutSubviews;
- (void)propertiesDidChange;
- (id)setupContentView;
- (void)observedPropertiesChanged;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultBaselineRelativeLayoutMargins;
- (void)disableUnbatchedUpdates;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
