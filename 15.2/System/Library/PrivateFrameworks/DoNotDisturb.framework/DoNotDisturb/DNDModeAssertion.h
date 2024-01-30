@class NSUUID, DNDModeAssertionSource, NSDate, DNDModeAssertionDetails;

@interface DNDModeAssertion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) DNDModeAssertionDetails *details;
@property (readonly, copy, nonatomic) DNDModeAssertionSource *source;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithUUID:(id)a0 startDate:(id)a1 details:(id)a2 source:(id)a3;

@end
