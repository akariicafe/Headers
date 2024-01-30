@class NSString;

@interface CAValueFunction : NSObject <NSSecureCoding> {
    NSString *_string;
    void *_impl;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;

+ (void)CAMLParserStartElement:(id)a0;
+ (id)functionWithName:(id)a0;

- (unsigned long long)inputCount;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithName:(int)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned char x2 : 8; unsigned int x3 : 24; } *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)a0;
- (BOOL)apply:(const double *)a0 result:(double *)a1;
- (BOOL)apply:(const double *)a0 result:(double *)a1 parameterFunction:(void /* function */ *)a2 context:(void *)a3;
- (unsigned long long)outputCount;

@end
