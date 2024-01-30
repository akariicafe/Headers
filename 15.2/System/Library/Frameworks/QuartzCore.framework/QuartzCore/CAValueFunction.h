@class NSString;

@interface CAValueFunction : NSObject <NSSecureCoding> {
    NSString *_string;
    void *_impl;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;

+ (id)functionWithName:(id)a0;
+ (void)CAMLParserStartElement:(id)a0;

- (void)encodeWithCAMLWriter:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)apply:(const double *)a0 result:(double *)a1;
- (BOOL)apply:(const double *)a0 result:(double *)a1 parameterFunction:(void /* function */ *)a2 context:(void *)a3;
- (id)initWithCoder:(id)a0;
- (id)_initWithName:(int)a0;
- (unsigned long long)outputCount;
- (void)dealloc;
- (unsigned long long)inputCount;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned int x2; } *)CA_copyRenderValue;

@end
