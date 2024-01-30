@class UIInterfaceAction, UIInterfaceActionGroupView;
@protocol UIFocusedInterfaceActionPressDelegate;

@interface _UIInterfaceActionSelectByPressGestureRecognizer : UITapGestureRecognizer

@property (weak, nonatomic) UIInterfaceAction *interfaceActionOnPressBegan;
@property (weak, nonatomic) id<UIFocusedInterfaceActionPressDelegate> pressDelegate;
@property (weak, nonatomic) UIInterfaceActionGroupView *actionGroupView;

- (id)initWithFocusedInterfaceActionPressDelegate:(id)a0;
- (void)_gestureChanged:(id)a0;
- (void).cxx_destruct;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;

@end
