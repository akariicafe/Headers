@class UIWebDateTimePopoverViewController;

@interface UIWebDefaultDateTimePopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl>

@property (retain, nonatomic) UIWebDateTimePopoverViewController *_webDateTimeViewController;

- (id)controlView;
- (void)dealloc;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)initWithDOMHTMLInputElement:(id)a0 datePickerMode:(long long)a1;
- (void)clear:(id)a0;

@end
