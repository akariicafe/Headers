@class NSArray;

@interface SeymourUI.TVTrainerDetailViewController : UISplitViewController {
    void /* unknown type, empty encoding */ coordinator;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end
