@class CCUICAPackageView, NSString;

@interface MRUNowPlayingRoutingButton : MPButton <UIPointerInteractionDelegate>

@property (retain, nonatomic) CCUICAPackageView *packageView;
@property (nonatomic) long long deviceType;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) long long context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updatePackage;
- (void)updatePackageState;

@end
