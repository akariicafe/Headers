@class UITableViewController;

@interface WKSelectPopover : WKFormRotatingAccessoryPopover <WKFormControl> {
    struct RetainPtr<WKSelectTableViewController> { void *m_ptr; } _tableViewController;
}

@property (readonly, nonatomic) UITableViewController *tableViewController;

- (id).cxx_construct;
- (void)dealloc;
- (id)controlView;
- (void).cxx_destruct;
- (void)_userActionDismissedPopover:(id)a0;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)initWithView:(id)a0 hasGroups:(BOOL)a1;
- (void)selectRow:(long long)a0 inComponent:(long long)a1 extendingSelection:(BOOL)a2;

@end
