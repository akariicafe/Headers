@class NSString, DOMHTMLFormElement;

@interface DOMHTMLButtonElement : DOMHTMLElement

@property BOOL autofocus;
@property BOOL disabled;
@property (readonly) DOMHTMLFormElement *form;
@property (copy) NSString *type;
@property (copy) NSString *name;
@property (copy) NSString *value;
@property (readonly) BOOL willValidate;
@property (copy) NSString *accessKey;

- (void)click;
- (int)structuralComplexityContribution;

@end
