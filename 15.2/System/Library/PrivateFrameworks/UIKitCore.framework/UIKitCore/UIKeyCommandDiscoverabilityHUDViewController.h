@class UIKeyCommandDiscoverabilityHUDView, NSArray;

@interface UIKeyCommandDiscoverabilityHUDViewController : UIViewController {
    NSArray *_keyCommands;
    struct __GSKeyboard { } *_keyboard;
}

@property (retain, nonatomic) UIKeyCommandDiscoverabilityHUDView *view;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)dealloc;
- (id)initWithKeyCommands:(id)a0 keyboard:(struct __GSKeyboard { } *)a1;
- (void)animateOutWithCompletion:(id /* block */)a0;
- (void)_updateVisualStyle;

@end
