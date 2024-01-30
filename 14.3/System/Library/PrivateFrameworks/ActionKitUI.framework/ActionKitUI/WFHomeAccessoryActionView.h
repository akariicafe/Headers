@class NSString, UIStackView;

@interface WFHomeAccessoryActionView : WFActionCustomView <WFActionEventObserver>

@property (retain, nonatomic) UIStackView *iconsStackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeightForAction:(id)a0;

- (void).cxx_destruct;
- (void)setAction:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (void)updateIcons;

@end
