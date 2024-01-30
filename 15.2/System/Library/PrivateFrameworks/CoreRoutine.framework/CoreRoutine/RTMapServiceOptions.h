@interface RTMapServiceOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL useBackgroundTraits;

- (void)encodeWithCoder:(id)a0;
- (id)initWithUseBackgroundTraits:(BOOL)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
