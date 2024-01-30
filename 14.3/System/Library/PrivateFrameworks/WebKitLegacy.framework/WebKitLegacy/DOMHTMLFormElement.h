@class NSString, DOMHTMLCollection;

@interface DOMHTMLFormElement : DOMHTMLElement

@property (copy) NSString *acceptCharset;
@property (copy) NSString *action;
@property (copy) NSString *enctype;
@property (copy) NSString *encoding;
@property (copy) NSString *method;
@property (copy) NSString *name;
@property (copy) NSString *target;
@property (readonly) DOMHTMLCollection *elements;
@property (readonly) int length;

- (int)structuralComplexityContribution;
- (void)reset;
- (void)submit;
- (BOOL)checkValidity;
- (id)autocomplete;
- (void)setAutocomplete:(id)a0;
- (BOOL)noValidate;
- (void)setNoValidate:(BOOL)a0;

@end
