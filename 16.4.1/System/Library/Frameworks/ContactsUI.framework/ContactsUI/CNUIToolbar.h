@class NSArray, UIVisualEffectView, UIView;

@interface CNUIToolbar : UIView

@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIView *border;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) NSArray *items;

+ (double)defaultToolBarHeight;

- (double)borderWidth;
- (void)layoutSubviews;
- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (void)buttonPressed:(id)a0;
- (void)setupView;
- (id)buttonForItem:(id)a0;
- (BOOL)isEnabledForItem:(id)a0;
- (void)setEnabled:(BOOL)a0 forItem:(id)a1;
- (void)setupBorder;

@end
