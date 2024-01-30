@class DOMCSSPrimitiveValue;

@interface DOMRect : DOMObject

@property (readonly) DOMCSSPrimitiveValue *top;
@property (readonly) DOMCSSPrimitiveValue *right;
@property (readonly) DOMCSSPrimitiveValue *bottom;
@property (readonly) DOMCSSPrimitiveValue *left;

- (void)dealloc;

@end
