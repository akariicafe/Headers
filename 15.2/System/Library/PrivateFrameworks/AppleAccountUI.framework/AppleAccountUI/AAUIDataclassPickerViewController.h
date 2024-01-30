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

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_tableHeaderView;
- (void)viewWillLayoutSubviews;
- (id)_tableView;
- (id)_tableFooterView;
- (void)loadView;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)_titleText;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)viewForHeaderInTableView:(id)a0;
- (id)viewForFooterInTableView:(id)a0;
- (double)heightForHeaderInTableView:(id)a0;
- (double)heightForFooterInTableView:(id)a0;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)_cancelBarButtonItem;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)_messageText;
- (id)_nextBarButtonItem;
- (void)_updateConstraintsForTraitCollection:(id)a0;
- (void)_cancelButtonSelected:(id)a0;
- (void)_nextButtonSelected:(id)a0;
- (id)initWithDataclassOptions:(id)a0;
- (id)_signOutFooterText;
- (void)_additionalInformationSelected:(id)a0;
- (void)_delegate_signOutViewControllerDidCancel;
- (void)_delegate_signOutViewControllerDidCompleteWithDataclassActions:(id)a0;
- (void)_dismissAdditionalInformation:(id)a0;
- (double)_compressedHeightForView:(id)a0 containedInView:(id)a1;
- (void)switchTableViewCellDidUpdateValue:(id)a0;

@end
