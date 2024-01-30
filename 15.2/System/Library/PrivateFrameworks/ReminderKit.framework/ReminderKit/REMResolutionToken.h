@class NSUUID;

@interface REMResolutionToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long counter;
@property (nonatomic) double modificationTime;
@property (retain, nonatomic) NSUUID *replicaID;

+ (id)resolutionTokenWithJSONObject:(id)a0;

- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)update;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)initWithCounter:(long long)a0 modificationTime:(double)a1 replicaID:(id)a2;
- (id)initWithDefaultValue;

@end
