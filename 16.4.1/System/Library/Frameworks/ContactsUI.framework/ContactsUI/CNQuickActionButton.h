@class CNQuickAction, NSArray, UILabel, UIButton;
@protocol CNQuickActionButtonDelegate;

@interface CNQuickActionButton : UIView

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSArray *activatedConstraints;
@property (retain, nonatomic) CNQuickAction *action;
@property (nonatomic) BOOL showTitle;
@property (nonatomic) BOOL showBackgroundPlatter;
@property (weak, nonatomic) id<CNQuickActionButtonDelegate> delegate;

- (void)performAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)onLongPress:(id)a0;

@end
