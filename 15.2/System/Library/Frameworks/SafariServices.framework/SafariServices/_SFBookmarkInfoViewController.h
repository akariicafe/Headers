@class NSString, NSArray, _SFBookmarkTextEntryTableViewCell, WebBookmark, _SFSiteIconView, UITextField, UIBarButtonItem, WebBookmarkCollection;
@protocol _SFBookmarkInfoViewControllerDelegate;

@interface _SFBookmarkInfoViewController : _SFPopoverSizingTableViewController <_SFBookmarkInfoViewControllerDelegate, _SFBookmarkTextEntryTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    WebBookmarkCollection *_collection;
    WebBookmark *_parentBookmark;
    NSArray *_childBookmarks;
    BOOL _addingBookmark;
    BOOL _saveWhenDismissed;
    _SFBookmarkTextEntryTableViewCell *_titleCell;
    _SFBookmarkTextEntryTableViewCell *_addressCell;
    _SFSiteIconView *_iconImageView;
    unsigned long long _editingField;
    BOOL _didSelectFolder;
    BOOL _folderPickerExpanded;
    BOOL _addingToFavorites;
    NSArray *_folders;
    long long _selectedFolderIndex;
    UITextField *_textFieldToRestoreFirstResponder;
    UIBarButtonItem *_saveButton;
    BOOL _enableAddFolder;
}

@property (weak, nonatomic) id<_SFBookmarkInfoViewControllerDelegate> delegate;
@property (copy, nonatomic) WebBookmark *bookmark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)validateCommand:(id)a0;
- (void)reloadData;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)saveKeyPressed;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_bookmarksDidReload:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)keyCommands;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)setParent:(id)a0;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)cancelKeyPressed;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 canFocusRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)saveChanges;
- (void)cancel;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_titleCell;
- (id)initWithBookmark:(id)a0 childBookmarks:(id)a1 inCollection:(id)a2 addingBookmark:(BOOL)a3 toFavorites:(BOOL)a4 willBeDisplayedModally:(BOOL)a5;
- (void)bookmarkInfoViewController:(id)a0 didFinishWithResult:(BOOL)a1;
- (BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)a0;
- (BOOL)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)a0;
- (void)updateTranslucentAppearance;
- (BOOL)hasTranslucentAppearance;
- (id)backgroundColorUsingTranslucentAppearance:(BOOL)a0;
- (void)_saveButtonPressed;
- (BOOL)_canEditFieldsInCurrentViewController;
- (void)_didBeginEditingTextField:(id)a0;
- (void)_didChangeEditingTextField:(id)a0;
- (void)_setFolderPickerExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)_removeActionsForTextFields;
- (void)_addActionsForTextFields;
- (void)_createCellsIfNeeded;
- (void)updateBookmarkIcon;
- (void)_reloadFolderInfoForced:(BOOL)a0;
- (void)_updateCellValues;
- (struct CGPoint { double x0; double x1; })_centerForIconView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_cellInset;
- (void)_updateSaveButton;
- (BOOL)canSaveChanges;
- (id)initWithBookmark:(id)a0 inCollection:(id)a1 addingBookmark:(BOOL)a2;
- (BOOL)_isIndexPathForNewFolderRow:(id)a0;
- (void)_createNewFolder;
- (void)_editField:(unsigned long long)a0;
- (long long)_numberOfExpandedFolderPickerRows;
- (id)_cellForNewFolderRowWithTableView:(id)a0;
- (id)_cellForExpandedFolderAtIndex:(long long)a0 withTableView:(id)a1;
- (id)_cellForParentBookmarkWithTableView:(id)a0;
- (id)_dequeueFolderPickerCellFromTableView:(id)a0;
- (id)_iconForViewCellGivenBookmark:(id)a0;
- (BOOL)isEditingField;
- (void)_returnWasPressedInTextField:(id)a0;
- (void)_valuesChanged;
- (void)_updateIconViewFrame;
- (void)bookmarkTextEntryTableViewController:(id)a0 dismissedWithText:(id)a1;
- (BOOL)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)a0;
- (BOOL)titleCellHasText;

@end
