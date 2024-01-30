@class NSString, DOMElement, DOMCSSStyleDeclaration;

@interface DOMAttr : DOMNode

@property (readonly, copy) NSString *name;
@property (readonly) BOOL specified;
@property (copy) NSString *value;
@property (readonly) DOMElement *ownerElement;
@property (readonly) DOMCSSStyleDeclaration *style;

- (BOOL)isId;

@end
