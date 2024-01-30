@class NSString, UITableViewCell, PMTitleEditorProvider, UITableView;
@protocol TitleChangeInformable;

@interface PMEditorTitleViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>

@property (retain, nonatomic) UITableViewCell *collectionViewControllerCell;
@property (nonatomic) long long activeCellIndex;
@property (retain, nonatomic) NSString *activeCellText;
@property (nonatomic) BOOL sizeIsTransitioning;
@property (retain, nonatomic) PMTitleEditorProvider *titleProvider;
@property (weak, nonatomic) id<TitleChangeInformable> titleChangeInformableDelegate;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_applicationDidBecomeActive:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)updateFonts;
- (void).cxx_destruct;
- (void)textDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
