@class NSUUID, CKDistributedTimestampStateVector, NSData;

@interface CKMultiValueMergeableDeltaRegisterState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) CKDistributedTimestampStateVector *vector;
@property (readonly, nonatomic) NSData *salt;

+ (id)newSalt;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 vector:(id)a1 salt:(id)a2;

@end
