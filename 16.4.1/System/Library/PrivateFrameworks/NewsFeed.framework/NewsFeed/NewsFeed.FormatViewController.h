@interface NewsFeed.FormatViewController : UIViewController <TUKeyCommandTraversable> {
    void /* unknown type, empty encoding */ isBeingUsedAsPlugin;
    void /* unknown type, empty encoding */ pluggableDelegate;
    void /* unknown type, empty encoding */ pluginIdentifier;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintLayoutProvider;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ lastComputedSize;
    void /* unknown type, empty encoding */ selectionProvider;
    void /* unknown type, empty encoding */ commands;
}

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)startTraversingWithDirection:(long long)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
