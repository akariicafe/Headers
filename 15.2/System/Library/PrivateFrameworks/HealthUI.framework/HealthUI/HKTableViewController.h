@interface HKTableViewController : UITableViewController {
    BOOL _useInsetStyling;
}

- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (id)initWithUsingInsetStyling:(BOOL)a0;

@end
