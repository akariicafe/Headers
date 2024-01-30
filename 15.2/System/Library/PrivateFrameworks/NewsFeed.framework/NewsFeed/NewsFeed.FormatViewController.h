@interface NewsFeed.FormatViewController : UIViewController <TUKeyCommandTraversable> {
    void /* unknown type, empty encoding */ isBeingUsedAsPlugin;
    void /* unknown type, empty encoding */ pluggableDelegate;
    void /* unknown type, empty encoding */ pluginIdentifier;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintLayoutProvider;
    void /* unknown type, empty encoding */ lastComputedSize;
}

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)startTraversingWithDirection:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
