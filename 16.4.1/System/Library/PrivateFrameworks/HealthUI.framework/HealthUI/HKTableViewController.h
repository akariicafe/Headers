@interface HKTableViewController : UITableViewController {
    BOOL _useInsetStyling;
}

- (void)viewDidLoad;
- (id)init;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithUsingInsetStyling:(BOOL)a0;

@end
