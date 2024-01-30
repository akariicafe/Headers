@interface SKAttributeValue : NSObject <NSSecureCoding> {
    float floatValues[4];
    unsigned short halfFloatValues[4];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (nonatomic) float floatValue;
@property (nonatomic) void /* unknown type, empty encoding */ vectorFloat2Value;
@property (nonatomic) void /* unknown type, empty encoding */ vectorFloat3Value;
@property (nonatomic) void /* unknown type, empty encoding */ vectorFloat4Value;

+ (id)valueWithFloat:(float)a0;
+ (id)valueWithVectorFloat2:(SEL)a0;
+ (id)valueWithVectorFloat3:(SEL)a0;
+ (id)valueWithVectorFloat4:(SEL)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)copyValueTo:(void *)a0 type:(long long)a1 count:(unsigned int)a2;
- (BOOL)isEqualToAttributeValue:(id)a0;

@end
