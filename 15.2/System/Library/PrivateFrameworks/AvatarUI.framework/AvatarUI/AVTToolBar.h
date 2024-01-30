@class NSArray, UIVisualEffectView, UIView;
@protocol AVTToolBarDelegate;

@interface AVTToolBar : UIView

@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIView *border;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (weak, nonatomic) id<AVTToolBarDelegate> delegate;
@property (nonatomic) BOOL isAnimating;

+ (double)defaultToolBarHeight;

- (void)layoutSubviews;
- (double)borderWidth;
- (void)setupView;
- (void).cxx_destruct;
- (void)setupBorder;
- (void)buttonPressed:(id)a0;
- (id)initWithButtons:(id)a0;
- (void)setEnabled:(BOOL)a0 forButtonAtIndex:(unsigned long long)a1;
- (id)buttonWithTitle:(id)a0 isDefault:(BOOL)a1;

@end
