@class NSArray, NSString, PXGadgetSpec, NSLayoutConstraint;
@protocol PXGadgetDelegate;

@interface PUSearchRecentSearchesGadget : UITableViewController <PXGadget>

@property (copy, nonatomic) NSArray *recentSearches;
@property (retain, nonatomic) NSLayoutConstraint *separatorRegularTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *separatorCompactWidthConstraint;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contentViewController;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_reloadData;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewLayoutMarginsDidChange;
- (void).cxx_destruct;
- (void)userDidSelectAccessoryButton:(id)a0;
- (void)_updateTableViewLayoutMargins;
- (void)resetLineSeparatorInsets;

@end
