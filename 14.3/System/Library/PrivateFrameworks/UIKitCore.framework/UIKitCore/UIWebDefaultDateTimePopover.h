@class UIWebDateTimePopoverViewController;

@interface UIWebDefaultDateTimePopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl>

@property (retain, nonatomic) UIWebDateTimePopoverViewController *_webDateTimeViewController;

- (void)dealloc;
- (void)clear:(id)a0;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)initWithDOMHTMLInputElement:(id)a0 datePickerMode:(long long)a1;

@end
