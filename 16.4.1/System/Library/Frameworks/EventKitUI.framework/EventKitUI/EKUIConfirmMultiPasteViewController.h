@class NSDate, NSString, EKAutocompleteSearchResult, UITableView, EKEventStore, EKUIPasteboardManager, EKCalendar, UILabel;
@protocol EKUIConfirmMultiPasteViewControllerDelegate;

@interface EKUIConfirmMultiPasteViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, EKUIPasteboardManagerPasteDelegate, UIAdaptivePresentationControllerDelegate> {
    UILabel *_descriptionLabel;
    UITableView *_tableView;
    EKAutocompleteSearchResult *_searchResult;
    EKUIPasteboardManager *_pasteboardManager;
    EKEventStore *_eventStore;
    EKCalendar *_selectedCalendar;
    NSDate *_dateForPaste;
}

@property (weak, nonatomic) id<EKUIConfirmMultiPasteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)pasteboardManager:(id)a0 beginEditingEvent:(id)a1;
- (id)popupMenu:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)editorForPasteboardManager:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)viewControllerToPresentAlertFromForPasteboardManager:(id)a0;
- (void)pasteboardManager:(id)a0 didFinishPasteWithResult:(unsigned long long)a1 willOpenEditor:(BOOL)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_done:(id)a0;
- (void)_cancel:(id)a0;
- (id)initWithSearchResult:(id)a0 pasteboardManager:(id)a1 eventStore:(id)a2 dateForPaste:(id)a3;

@end
