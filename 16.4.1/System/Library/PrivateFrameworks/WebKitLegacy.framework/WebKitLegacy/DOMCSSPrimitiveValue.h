@interface DOMCSSPrimitiveValue : DOMCSSValue

@property (readonly) unsigned short primitiveType;

- (float)getFloatValue:(unsigned short)a0;
- (id)getRGBColorValue;
- (id)getStringValue;
- (id)getCounterValue;
- (void)setFloatValue:(unsigned short)a0 :(float)a1;
- (id)getRectValue;
- (void)setFloatValue:(unsigned short)a0 floatValue:(float)a1;
- (void)setStringValue:(unsigned short)a0 :(id)a1;
- (void)setStringValue:(unsigned short)a0 stringValue:(id)a1;

@end
