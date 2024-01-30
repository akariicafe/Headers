@class NSString;

@interface DOMCSSValue : DOMObject

@property (copy) NSString *cssText;
@property (readonly) unsigned short cssValueType;

- (void)dealloc;

@end
