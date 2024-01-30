@interface SleepHealthAppPlugin.LockupTableViewCell : UITableViewCell <ASCLockupViewDelegate> {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ lockupView;
    void /* unknown type, empty encoding */ presentingViewController;
}

- (id)presentingViewControllerForLockupView:(id)a0;
- (void)lockupViewDidFinishRequest:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
