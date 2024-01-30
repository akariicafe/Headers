@protocol UIWebFormControl;

@interface UIWebDateTimePopoverViewController : UIViewController

@property (retain, nonatomic) id<UIWebFormControl> _innerWebDateTimeControl;

- (void)loadView;
- (void)dealloc;
- (id)initWithDOMHTMLInputElement:(id)a0 datePickerMode:(long long)a1;

@end
