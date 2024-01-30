@interface SleepHealthAppPlugin.SleepTableWelcomeController : OBTableWelcomeController {
    void /* unknown type, empty encoding */ observerContext;
    void /* unknown type, empty encoding */ contentSizeKeyPath;
    void /* unknown type, empty encoding */ heightConstraint;
    void /* unknown type, empty encoding */ hasSystemMargins;
    void /* unknown type, empty encoding */ resizeAnimationDuration;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 adoptTableViewScrollView:(BOOL)a3;

@end
