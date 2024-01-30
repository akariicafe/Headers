@interface WFSwiftUIActionDescriptionViewController : UIViewController <WFActionDrawerDelegate> {
    void /* unknown type, empty encoding */ action;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)appendAction:(id)a0;

@end
