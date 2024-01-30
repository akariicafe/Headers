@interface WFIcon : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasClearBackground;

- (void)encodeWithCoder:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;

@end
