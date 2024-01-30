@class DOMHTMLInputElement;
@protocol UIWebFormControl;

@interface UIWebFormDateTimePeripheral : NSObject <UIFormPeripheral>

@property (retain, nonatomic) DOMHTMLInputElement *_inputElement;
@property (retain, nonatomic) id<UIWebFormControl> _control;

+ (id)createPeripheralWithDOMHTMLInputElement:(id)a0;

- (void)dealloc;
- (id)assistantView;
- (void)beginEditing;
- (void)endEditing;
- (long long)_datePickerModeForInputType:(id)a0;
- (id)initWithDOMHTMLInputElement:(id)a0;

@end
