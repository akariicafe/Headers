@interface TRProvisionAnisetteDataResponse : TRResponseMessage

@property (nonatomic) BOOL didSucceed;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
