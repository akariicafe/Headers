@class NSString, DOMHTMLFormElement;

@interface DOMHTMLLegendElement : DOMHTMLElement

@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *align;
@property (copy) NSString *accessKey;

@end
