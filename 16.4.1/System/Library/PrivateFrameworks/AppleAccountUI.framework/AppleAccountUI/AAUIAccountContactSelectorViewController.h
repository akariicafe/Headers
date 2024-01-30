@class NSString, NSArray, AALocalContactInfo, AAUIProfilePictureStore, UIBarButtonItem;
@protocol AAUIAccountContactSelectorDelegate;

@interface AAUIAccountContactSelectorViewController : AAUIOBTableWelcomeController <UITableViewDelegate, UITableViewDataSource> {
    NSArray *_suggestedContacts;
    AALocalContactInfo *_selectedContact;
    AAUIProfilePictureStore *_pictureStore;
    UIBarButtonItem *_continueButton;
}

@property (weak, nonatomic) id<AAUIAccountContactSelectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)_setupTableView;
- (BOOL)_isOtherContactRowForIndexPath:(id)a0;
- (id)_otherContactCellForTableView:(id)a0;
- (id)_pictureStore;
- (void)_selectContact;
- (id)_suggestedContactCellForTableView:(id)a0 atRow:(long long)a1;

@end
