@class NSString, DOMCSSStyleDeclaration;

@interface DOMCSSStyleRule : DOMCSSRule

@property (copy) NSString *selectorText;
@property (readonly) DOMCSSStyleDeclaration *style;

@end
