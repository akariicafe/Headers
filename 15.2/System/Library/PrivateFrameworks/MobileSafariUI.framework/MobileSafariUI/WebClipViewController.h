@class TabDocument, NSString, UITableViewCell, UIImageView, NSObject, UIWebClip;
@protocol WebClipViewControllerDelegate;

@interface WebClipViewController : UITableViewController <UITextFieldDelegate, _SFBookmarkTextEntryTableViewControllerDelegate> {
    TabDocument *_tabDocument;
    UITableViewCell *_titleCell;
    UITableViewCell *_addressCell;
    UIImageView *_iconImageView;
    BOOL _suspendAfterDismiss;
    BOOL _delegateNotifiedOfResult;
}

@property (retain) UIWebClip *webClip;
@property (weak, nonatomic) NSObject<WebClipViewControllerDelegate> *delegate;
@property (nonatomic) BOOL canEditAndSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_add;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)loadView;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_cancel;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_textFieldChanged:(id)a0;
- (BOOL)_canEditFieldsInCurrentViewController;
- (struct CGPoint { double x0; double x1; })_centerForIconView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_cellInset;
- (void)bookmarkTextEntryTableViewController:(id)a0 dismissedWithText:(id)a1;
- (BOOL)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)a0;
- (id)initWithTabDocument:(id)a0;
- (BOOL)_shouldUseTranslucentAppearance;
- (void)updateUIAnimated:(BOOL)a0;
- (BOOL)_canAddWebClip;

@end
