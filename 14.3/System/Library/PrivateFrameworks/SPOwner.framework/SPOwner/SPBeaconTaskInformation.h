@class NSString, NSUUID, NSError, NSDate;

@interface SPBeaconTaskInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSUUID *commandIdentifier;

- (id)initWithName:(id)a0 lastUpdated:(id)a1 error:(id)a2 state:(long long)a3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
