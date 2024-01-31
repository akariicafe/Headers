@class UITableView, NSArray, CNContactCardFieldPickerDataSource, NSString, UIBarButtonItem;
@protocol CNContactCardFieldPickerDelegate;

@interface CNContactCardFieldPicker : UIViewController <UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIBarButtonItem *toggleSelectAllFieldsButton;
@property (nonatomic) BOOL shouldSelectDefaultFields;
@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) id<CNContactCardFieldPickerDelegate> delegate;
@property (retain, nonatomic) CNContactCardFieldPickerDataSource *fieldPickerDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageProperties;
+ (id)privateCardPropertiesForContacts:(id)a0;

- (id)initWithContact:(id)a0;
- (void)done:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)selectAllFields;
- (void)setUpDoneButton;
- (BOOL)allFieldsSelected;
- (void)deselectAllFields;
- (id)initWithContacts:(id)a0;
- (BOOL)isInActivityController;
- (void)saveFilteredContacts;
- (void)selectDefaultFields;
- (void)setPhotoFromContact:(id)a0 onFilteredContact:(id)a1;
- (void)setUpTableView;
- (void)setUpToggleSelectAllFieldsButton;
- (id)titleForSelectAllFieldsButton;
- (void)toggleSelectionOfFields:(id)a0;
- (void)updateToggleSelectAllFieldsButtonTitle;

@end
