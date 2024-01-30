@interface TRSetupActivationResponse : TRResponseMessage

@property (nonatomic) BOOL activated;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
