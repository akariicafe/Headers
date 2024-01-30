@interface MDLSubmeshProxy : MDLSubmesh <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
