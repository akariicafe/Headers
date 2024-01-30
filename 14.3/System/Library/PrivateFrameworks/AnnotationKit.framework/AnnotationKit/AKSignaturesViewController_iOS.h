@class UITableView, NSArray, AKController, UIColor, UIResponder, NSString, UINavigationBar;
@protocol AKSignaturesViewControllerDelegate;

@interface AKSignaturesViewController_iOS : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationBarDelegate, AKSignatureCreationControllerDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UINavigationBar *navBar;
@property (retain, nonatomic) NSArray *rightBarItems;
@property (retain, nonatomic) NSArray *editingLeftBarItems;
@property (retain, nonatomic) NSArray *leftBarItems;
@property (weak, nonatomic) UIResponder *responderToRestore;
@property (weak, nonatomic) AKController *controller;
@property (weak, nonatomic) id<AKSignaturesViewControllerDelegate> delegate;
@property (readonly, nonatomic) double idealHeight;
@property (nonatomic) BOOL presentedInAlert;
@property (nonatomic) BOOL showsNavigationBar;
@property (nonatomic) BOOL allowsEdits;
@property (nonatomic) BOOL showAddEditButtonRow;
@property (retain, nonatomic) UIColor *tableBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)_signatures;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)positionForBar:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithController:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)signatureCreationControllerDidCreateSignature:(id)a0;
- (void)_configureUI;
- (void)_continueToCreateSignature:(id)a0;
- (void)_cancelPicker:(id)a0;
- (void)_deleteSignature:(id)a0;

@end
