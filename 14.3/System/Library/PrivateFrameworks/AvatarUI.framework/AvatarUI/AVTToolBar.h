@class NSArray, UIVisualEffectView, UIView;
@protocol AVTToolBarDelegate;

@interface AVTToolBar : UIView

@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIView *border;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (weak, nonatomic) id<AVTToolBarDelegate> delegate;
@property (nonatomic) BOOL isAnimating;

+ (double)defaultToolBarHeight;

- (void).cxx_destruct;
- (id)buttonWithTitle:(id)a0 isDefault:(BOOL)a1;
- (void)buttonPressed:(id)a0;
- (void)layoutSubviews;
- (double)borderWidth;
- (id)initWithButtons:(id)a0;
- (void)setEnabled:(BOOL)a0 forButtonAtIndex:(unsigned long long)a1;
- (void)setupView;
- (void)setupBorder;

@end
