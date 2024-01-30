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

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)updatePackage;
- (void)updatePackageState;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;

@end
