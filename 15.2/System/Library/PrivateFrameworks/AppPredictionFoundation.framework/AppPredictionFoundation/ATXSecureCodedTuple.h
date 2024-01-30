@interface ATXSecureCodedTuple : _PASTuple2 <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allowedClassNames;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
