@class NSString, DOMCSSStyleSheet;

@interface DOMCSSRule : DOMObject

@property (readonly) unsigned short type;
@property (copy) NSString *cssText;
@property (readonly) DOMCSSStyleSheet *parentStyleSheet;
@property (readonly) DOMCSSRule *parentRule;

- (void)dealloc;

@end
