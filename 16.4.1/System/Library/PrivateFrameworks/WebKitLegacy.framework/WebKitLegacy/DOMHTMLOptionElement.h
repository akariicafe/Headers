@class NSString, DOMHTMLFormElement;

@interface DOMHTMLOptionElement : DOMHTMLElement

@property BOOL disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *label;
@property BOOL defaultSelected;
@property BOOL selected;
@property (copy) NSString *value;
@property (readonly, copy) NSString *text;
@property (readonly) int index;

@end
