@class WKContentView, WKSelectPopover;

@interface WKSelectTableViewController : UITableViewController {
    unsigned long long _singleSelectionIndex;
    unsigned long long _singleSelectionSection;
    long long _numberOfSections;
    BOOL _allowsMultipleSelection;
    double _fontSize;
    double _maximumTextWidth;
    long long _textAlignment;
    WKContentView *_contentView;
}

@property (readonly, nonatomic) BOOL shouldDismissWithAnimation;
@property (nonatomic) WKSelectPopover *popover;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void *)findItemAt:(id)a0;
- (long long)findItemIndexAt:(id)a0;
- (id)initWithView:(id)a0 hasGroups:(BOOL)a1;
- (void)populateCell:(id)a0 withItem:(const void *)a1;

@end
