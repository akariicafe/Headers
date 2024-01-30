@class NSArray, UIVisualEffectView, UIView;
@protocol AVTToolBarDelegate;

@interface AVTToolBar : UIView

@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIView *border;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (weak, nonatomic) id<AVTToolBarDelegate> delegate;
@property (nonatomic) BOOL isAnimating;

+ (double)defaultToolBarHeight;

- (double)borderWidth;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)buttonPressed:(id)a0;
- (void)setupView;
- (void)setupBorder;
- (id)initWithButtons:(id)a0;
- (id)buttonWithTitle:(id)a0 isDefault:(BOOL)a1;
- (void)setEnabled:(BOOL)a0 forButtonAtIndex:(unsigned long long)a1;

@end
