@class NSArray;

@interface CKPackageUploadRequestMetadata : CKUploadRequestMetadata <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *referenceSignatures;
@property (readonly, copy, nonatomic) NSArray *fileSignatures;

- (id)initWithRepairZoneRecordID:(id)a0 databaseScope:(long long)a1 recordID:(id)a2 recordType:(id)a3 fieldName:(id)a4 fileSignatures:(id)a5 referenceSignatures:(id)a6;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRepairZoneRecordID:(id)a0 databaseScope:(long long)a1 recordID:(id)a2 recordType:(id)a3 fieldName:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end
