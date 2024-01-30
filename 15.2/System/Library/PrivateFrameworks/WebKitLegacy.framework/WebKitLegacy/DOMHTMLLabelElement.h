@class NSString, DOMHTMLFormElement;

@interface DOMHTMLLabelElement : DOMHTMLElement

@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *htmlFor;
@property (copy) NSString *accessKey;

- (id)control;

@end
