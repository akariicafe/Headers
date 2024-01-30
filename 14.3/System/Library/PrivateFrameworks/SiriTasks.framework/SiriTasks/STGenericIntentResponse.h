@interface STGenericIntentResponse : AFSiriResponse

@property (nonatomic) long long responseCode;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
