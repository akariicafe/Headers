@class NSString;

@interface TRLegacyAnisetteDataRequest : TRRequestMessage

@property (copy, nonatomic) NSString *dsid;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
