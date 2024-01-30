@class NSString, NSUUID;

@interface DNDRequestDetails : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSUUID *auditUUID;
@property (readonly, nonatomic) unsigned long long timestamp;

+ (id)detailsRepresentingNowWithClientIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithClientIdentifier:(id)a0 auditUUID:(id)a1 timestamp:(unsigned long long)a2;
- (void).cxx_destruct;

@end
