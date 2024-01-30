@interface SUCorePowerAssertion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int activeAssertionCount;
@property (nonatomic) unsigned int assertionID;

- (id)summary;
- (id)init;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
