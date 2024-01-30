@class CKRecordID;

@interface HMBShareUserID : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CKRecordID *userRecordID;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)logIdentifier;
- (id)initWithUserRecordID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
