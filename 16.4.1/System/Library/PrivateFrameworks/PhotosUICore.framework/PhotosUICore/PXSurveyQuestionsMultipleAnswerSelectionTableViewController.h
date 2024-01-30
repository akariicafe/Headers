@class NSArray, NSMutableSet, UIBarButtonItem;

@interface PXSurveyQuestionsMultipleAnswerSelectionTableViewController : UITableViewController

@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) NSArray *reasons;
@property (readonly, nonatomic) NSMutableSet *currentlySelectedReasons;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIBarButtonItem *doneButton;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)_handleCancel;
- (void)_handleDone;
- (void)_setupNavigationBar:(id)a0 message:(id)a1;
- (id)initWithTitle:(id)a0 message:(id)a1 reasons:(id)a2 currentlySelectedReasons:(id)a3 completion:(id /* block */)a4;

@end
