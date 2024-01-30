@interface FocusUI.ActivityEditViewController : UIViewController {
    void /* unknown type, empty encoding */ activityDescription;
    void /* unknown type, empty encoding */ willDisappearBlock;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ visibleHeight;
@property (nonatomic, copy) id /* block */ willDisappearBlock;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleTap:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithActivityDescription:(id)a0;

@end
