@class UIWebSelectTableViewController;

@interface UIWebSelectPopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl>

@property (retain, nonatomic) UIWebSelectTableViewController *_tableViewController;

- (id)initWithDOMHTMLSelectElement:(id)a0 cachedItems:(id)a1 singleSelectionItem:(id)a2 singleSelectionIndex:(unsigned long long)a3 multipleSelection:(BOOL)a4;
- (void)dealloc;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)_userActionDismissedPopover:(id)a0;

@end
