@class NSData;

@interface TRSyncAnisetteDataRequest : TRRequestMessage

@property (copy, nonatomic) NSData *simData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
