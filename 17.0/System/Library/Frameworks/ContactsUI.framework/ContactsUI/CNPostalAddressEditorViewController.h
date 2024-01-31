@class CNMutableContact, NSString, CNCardPropertyGroup, NSMutableArray;

@interface CNPostalAddressEditorViewController : UITableViewController <CNPresenterDelegate, CNPropertyCellDelegate> {
    NSMutableArray *_propertyItems;
    NSString *_propertyKey;
    CNMutableContact *_contact;
    CNCardPropertyGroup *_propertyGroup;
    BOOL _editNames;
    BOOL _editingExistingContact;
}

@property (readonly) BOOL isPresentingModalViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifierForClass:(Class)a0;
+ (id)cellIdentifierForEditingProperty:(id)a0;

- (void)done:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)contactViewCache;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)cancel:(id)a0;
- (double)tableViewSpacingForExtraSeparators:(id)a0;
- (void)_rebuildPropertyGroupItems:(BOOL)a0;
- (void)_startEditingFirstCell;
- (id)initWithContact:(id)a0 propertyKey:(id)a1 editNames:(BOOL)a2;
- (void)propertyCell:(id)a0 didUpdateItem:(id)a1 withNewLabel:(id)a2;
- (void)propertyCell:(id)a0 didUpdateItem:(id)a1 withNewValue:(id)a2;
- (void)propertyCell:(id)a0 performActionForItem:(id)a1 withTransportType:(long long)a2;
- (void)propertyCellDidChangeLayout:(id)a0;
- (void)registerContactCellClass:(Class)a0;
- (void)sender:(id)a0 dismissViewController:(id)a1;
- (void)sender:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)sender:(id)a0 presentViewController:(id)a1;
- (void)validateContents;

@end
