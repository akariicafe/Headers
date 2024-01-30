@class NSArray;

@interface NewsUI2.MagazineCategoriesViewController : UIViewController <TUPluggable, TUKeyCommandTraversable, TUDeselectable> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintLayoutProvider;
    void /* unknown type, empty encoding */ config;
}

@property (nonatomic, readonly) long long pluginItemCount;
@property (nonatomic, readonly) long long pluginVisibleItemCount;
@property (nonatomic, readonly) NSArray *pluginItemIdentifiers;
@property (nonatomic) void /* unknown type, empty encoding */ isBeingUsedAsPlugin;
@property (nonatomic, weak) void /* unknown type, empty encoding */ pluggableDelegate;

- (void)deselect;
- (void)initializeWithCompletion:(id /* block */)a0;
- (void)relayoutWithCompletion:(id /* block */)a0;
- (void)startTraversingWithDirection:(long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
