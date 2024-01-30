@class NSUUID, NSArray, NSDate;

@interface RTFingerprint : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long settledState;
@property (readonly, nonatomic) NSDate *start;
@property (readonly, nonatomic) NSArray *accessPoints;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 settledState:(unsigned long long)a1 start:(id)a2 accessPoints:(id)a3;

@end
