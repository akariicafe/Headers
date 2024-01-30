@class NSString, DOMCSSStyleDeclaration;

@interface DOMCSSPageRule : DOMCSSRule

@property (copy) NSString *selectorText;
@property (readonly) DOMCSSStyleDeclaration *style;

@end
