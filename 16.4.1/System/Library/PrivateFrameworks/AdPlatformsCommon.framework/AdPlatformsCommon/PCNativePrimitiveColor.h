@interface PCNativePrimitiveColor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long rawValue;
@property (readonly, nonatomic) unsigned char red;
@property (readonly, nonatomic) unsigned char blue;
@property (readonly, nonatomic) unsigned char green;
@property (readonly, nonatomic) unsigned char alpha;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRGBA:(long long)a0;

@end
