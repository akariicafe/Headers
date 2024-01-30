@class UITableViewController;

@interface WKSelectPopover : WKFormRotatingAccessoryPopover <WKFormControl> {
    struct RetainPtr<WKSelectTableViewController> { void *m_ptr; } _tableViewController;
}

@property (readonly, nonatomic) UITableViewController *tableViewController;

- (void).cxx_destruct;
- (id)controlView;
- (id)initWithView:(id)a0 hasGroups:(BOOL)a1;
- (void)selectRow:(long long)a0 inComponent:(long long)a1 extendingSelection:(BOOL)a2;
- (void)dealloc;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id).cxx_construct;
- (void)_userActionDismissedPopover:(id)a0;

@end
