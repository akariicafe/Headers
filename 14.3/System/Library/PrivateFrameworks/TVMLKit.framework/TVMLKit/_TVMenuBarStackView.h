@class NSArray;
@protocol _TVMenuBarStackViewDelegate;

@interface _TVMenuBarStackView : UIStackView

@property (weak, nonatomic) id<_TVMenuBarStackViewDelegate> delegate;
@property (nonatomic) unsigned long long selectedIndex;
@property (copy, nonatomic) NSArray *tabBarItems;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureView;
- (void)_buttonEventTouchUpInside:(id)a0;

@end
