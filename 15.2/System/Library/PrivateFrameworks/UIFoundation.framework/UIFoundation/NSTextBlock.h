@interface NSTextBlock : NSObject <NSSecureCoding, NSCoding, NSCopying> {
    void *_propVals;
    unsigned long long _propMask;
    unsigned long long _typeMask;
    id _primParamVal;
    id _otherParamVals;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (void)setBorderColor:(id)a0;
- (void)setVerticalAlignment:(unsigned long long)a0;
- (unsigned long long)verticalAlignment;
- (id)_attributeDescription;
- (double)contentWidth;
- (void)encodeWithCoder:(id)a0;
- (id)backgroundColor;
- (double)widthForLayer:(long long)a0 edge:(unsigned long long)a1;
- (double)valueForDimension:(unsigned long long)a0;
- (unsigned long long)widthValueTypeForLayer:(long long)a0 edge:(unsigned long long)a1;
- (unsigned long long)valueTypeForDimension:(unsigned long long)a0;
- (void)_destroyFloatStorage;
- (void)_createFloatStorage;
- (void)_takeValuesFromTextBlock:(id)a0;
- (void)_setValue:(double)a0 type:(unsigned long long)a1 forParameter:(unsigned long long)a2;
- (double)_valueForParameter:(unsigned long long)a0;
- (unsigned long long)_valueTypeForParameter:(unsigned long long)a0;
- (void)setValue:(double)a0 type:(unsigned long long)a1 forDimension:(unsigned long long)a2;
- (void)setWidth:(double)a0 type:(unsigned long long)a1 forLayer:(long long)a2 edge:(unsigned long long)a3;
- (void)setBorderColor:(id)a0 forEdge:(unsigned long long)a1;
- (id)borderColorForEdge:(unsigned long long)a0;
- (void)setContentWidth:(double)a0 type:(unsigned long long)a1;
- (unsigned long long)contentWidthValueType;
- (void)setWidth:(double)a0 type:(unsigned long long)a1 forLayer:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForLayoutAtPoint:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 textContainer:(id)a2 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 textContainer:(id)a2 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)drawBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 layoutManager:(id)a3;

@end
