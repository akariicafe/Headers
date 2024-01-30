@interface CAMediaTimingFunction : NSObject <NSSecureCoding> {
    struct CAMediaTimingFunctionPrivate { float x0[2]; float x1[2]; } *_priv;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)functionWithName:(id)a0;
+ (void)CAMLParserEndElement:(id)a0 content:(id)a1;
+ (id)functionWithControlPoints:(float)a0 :(float)a1 :(float)a2 :(float)a3;

- (float)_solveForInput:(float)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)CA_copyNumericValue:(double *)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)CA_numericValueCount;
- (void)dealloc;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)a0;
- (id)description;
- (void)_getPoints:(double *)a0;
- (id)CAMLType;
- (void)getControlPointAtIndex:(unsigned long long)a0 values:(float[2])a1;
- (id)initWithControlPoints:(float)a0 :(float)a1 :(float)a2 :(float)a3;

@end
