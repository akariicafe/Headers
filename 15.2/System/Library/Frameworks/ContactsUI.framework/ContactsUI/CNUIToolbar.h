@class NSArray, UIVisualEffectView, UIView;

@interface CNUIToolbar : UIView

@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIView *border;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) NSArray *items;

+ (double)defaultToolBarHeight;

- (id)initWithItems:(id)a0;
- (void)layoutSubviews;
- (double)borderWidth;
- (void)setupView;
- (void).cxx_destruct;
- (void)setupBorder;
- (id)buttonForItem:(id)a0;
- (BOOL)isEnabledForItem:(id)a0;
- (void)setEnabled:(BOOL)a0 forItem:(id)a1;
- (void)buttonPressed:(id)a0;

@end
