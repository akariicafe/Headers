@interface STGenericIntentResponse : AFSiriResponse

@property (nonatomic) long long responseCode;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
