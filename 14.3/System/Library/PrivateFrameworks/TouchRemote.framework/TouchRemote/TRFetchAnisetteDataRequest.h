@interface TRFetchAnisetteDataRequest : TRRequestMessage

@property (nonatomic) BOOL shouldProvision;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
