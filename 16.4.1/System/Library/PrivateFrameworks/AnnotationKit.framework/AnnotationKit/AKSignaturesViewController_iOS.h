@class UITableView, NSArray, AKController, UIColor, UIResponder, NSString, UINavigationBar;
@protocol AKSignaturesViewControllerDelegate;

@interface AKSignaturesViewController_iOS : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationBarDelegate, AKSignatureCreationControllerDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UINavigationBar *navBar;
@property (retain, nonatomic) NSArray *rightBarItems;
@property (retain, nonatomic) NSArray *editingLeftBarItems;
@property (retain, nonatomic) NSArray *leftBarItems;
@property (weak, nonatomic) UIResponder *responderToRestore;
@property (nonatomic) long long signatureImageContentMode;
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
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (long long)positionForBar:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithController:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (BOOL)canBecomeFirstResponder;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)_signatures;
- (void)_cancelPicker:(id)a0;
- (void)_configureUI;
- (void)_continueToCreateSignature:(id)a0;
- (void)_deleteSignature:(id)a0;
- (void)_updateSignatureCellLayout;
- (void)signatureCreationControllerDidCreateSignature:(id)a0;

@end
