@interface TRProvisionAnisetteDataResponse : TRResponseMessage

@property (nonatomic) BOOL didSucceed;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;

@end
