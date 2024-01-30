@class NSData;

@interface TRSyncAnisetteDataRequest : TRRequestMessage

@property (copy, nonatomic) NSData *simData;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
