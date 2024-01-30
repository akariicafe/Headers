@class DOMHTMLSelectElement;
@protocol UIWebFormControl;

@interface UIWebFormSelectPeripheral : NSObject <UIFormPeripheral>

@property (retain, nonatomic) DOMHTMLSelectElement *_selectionNode;
@property (retain, nonatomic) id<UIWebFormControl> _selectControl;

+ (id)createPeripheralWithDOMHTMLSelectElement:(id)a0;

- (void)dealloc;
- (id)assistantView;
- (void)endEditing;
- (id)initWithDOMHTMLSelectElement:(id)a0;
- (void)beginEditing;

@end
