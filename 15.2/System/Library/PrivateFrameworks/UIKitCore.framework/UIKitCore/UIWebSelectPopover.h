@class UIWebSelectTableViewController;

@interface UIWebSelectPopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl>

@property (retain, nonatomic) UIWebSelectTableViewController *_tableViewController;

- (id)initWithDOMHTMLSelectElement:(id)a0 cachedItems:(id)a1 singleSelectionItem:(id)a2 singleSelectionIndex:(unsigned long long)a3 multipleSelection:(BOOL)a4;
- (id)controlView;
- (void)dealloc;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (void)_userActionDismissedPopover:(id)a0;

@end
