@class NSString, CKRecordID, NSData;

@interface CKAssetReference : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long databaseScope;
@property (readonly, copy, nonatomic) CKRecordID *recordID;
@property (readonly, copy, nonatomic) NSString *fieldName;
@property (readonly, copy, nonatomic) NSData *fileSignature;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExistingRecordID:(id)a0 databaseScope:(long long)a1 fieldName:(id)a2 fileSignature:(id)a3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
