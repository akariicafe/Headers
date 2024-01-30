@interface CAMediaTimingFunction : NSObject <NSSecureCoding> {
    struct CAMediaTimingFunctionPrivate { float x0[2]; float x1[2]; } *_priv;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)CAMLParserEndElement:(id)a0 content:(id)a1;
+ (id)functionWithControlPoints:(float)a0 :(float)a1 :(float)a2 :(float)a3;
+ (id)functionWithName:(id)a0;

- (void)dealloc;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; } *)CA_copyRenderValue;
- (id)initWithControlPoints:(float)a0 :(float)a1 :(float)a2 :(float)a3;
- (void)_getPoints:(double *)a0;
- (id)CAMLType;
- (id)initWithCoder:(id)a0;
- (float)_solveForInput:(float)a0;
- (id)description;
- (void)encodeWithCAMLWriter:(id)a0;
- (unsigned long long)CA_copyNumericValue:(double[20])a0;
- (void)getControlPointAtIndex:(unsigned long long)a0 values:(float[2])a1;
- (void)encodeWithCoder:(id)a0;

@end
