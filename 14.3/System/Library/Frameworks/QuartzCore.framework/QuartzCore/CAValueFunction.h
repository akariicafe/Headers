@class NSString;

@interface CAValueFunction : NSObject <NSSecureCoding> {
    NSString *_string;
    void *_impl;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;

+ (void)CAMLParserStartElement:(id)a0;
+ (id)functionWithName:(id)a0;

- (id)_initWithName:(int)a0;
- (void)dealloc;
- (struct Object { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; } *)CA_copyRenderValue;
- (unsigned long long)inputCount;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCAMLWriter:(id)a0;
- (BOOL)apply:(const double *)a0 result:(double *)a1;
- (BOOL)apply:(const double *)a0 result:(double *)a1 parameterFunction:(void /* function */ *)a2 context:(void *)a3;
- (unsigned long long)outputCount;
- (void)encodeWithCoder:(id)a0;

@end
