@interface TRFetchAnisetteDataRequest : TRRequestMessage

@property (nonatomic) BOOL shouldProvision;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;

@end
