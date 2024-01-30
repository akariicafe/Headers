@class NSData;

@interface CKAssetUploadRequestMetadata : CKUploadRequestMetadata <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *referenceSignature;
@property (readonly, nonatomic) long long listIndex;
@property (readonly, copy, nonatomic) NSData *fileSignature;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)initWithRepairZoneRecordID:(id)a0 databaseScope:(long long)a1 recordID:(id)a2 recordType:(id)a3 fieldName:(id)a4 fileSignature:(id)a5 referenceSignature:(id)a6;
- (id)initWithRepairZoneRecordID:(id)a0 databaseScope:(long long)a1 recordID:(id)a2 recordType:(id)a3 fieldName:(id)a4 fileSignature:(id)a5 referenceSignature:(id)a6 listIndex:(long long)a7;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRepairZoneRecordID:(id)a0 databaseScope:(long long)a1 recordID:(id)a2 recordType:(id)a3 fieldName:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end
