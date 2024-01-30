@class _AAUIDataclassOptionCache, AAUIBuddyView, NSDictionary, NSString, NSArray, AAUIHeaderView, UITableView;
@protocol AAUIDataclassPickerViewControllerDelegate;

@interface AAUIDataclassPickerViewController : UIViewController <AAUISwitchTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate, NSCoding, NSSecureCoding> {
    AAUIHeaderView *_tableHeaderView;
    UITableView *_tableView;
    AAUIBuddyView *_tableFooterView;
    NSArray *_compactConstraints;
    NSArray *_expandedConstraints;
    _AAUIDataclassOptionCache *_dataclassOptionCache;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AAUIBuddyView *view;
@property (weak, nonatomic) id<AAUIDataclassPickerViewControllerDelegate> delegate;
@property (copy, nonatomic) NSDictionary *dataclassOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_tableFooterView;
- (id)_tableView;
- (void)_nextButtonSelected:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)_titleText;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)_cancelButtonSelected:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateConstraintsForTraitCollection:(id)a0;
- (id)_tableHeaderView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)viewForHeaderInTableView:(id)a0;
- (id)viewForFooterInTableView:(id)a0;
- (double)heightForHeaderInTableView:(id)a0;
- (double)heightForFooterInTableView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)_messageText;
- (id)_nextBarButtonItem;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)_cancelBarButtonItem;
- (void)viewDidLoad;
- (void)encodeWithCoder:(id)a0;
- (void)viewWillLayoutSubviews;
- (id)initWithDataclassOptions:(id)a0;
- (id)_signOutFooterText;
- (void)_additionalInformationSelected:(id)a0;
- (void)_delegate_signOutViewControllerDidCancel;
- (void)_delegate_signOutViewControllerDidCompleteWithDataclassActions:(id)a0;
- (void)_dismissAdditionalInformation:(id)a0;
- (double)_compressedHeightForView:(id)a0 containedInView:(id)a1;
- (void)switchTableViewCellDidUpdateValue:(id)a0;

@end
