@class NSNumber;

@interface CKAssetTransferOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *sparseAware;
@property (copy, nonatomic) NSNumber *shouldFetchAssetContent;
@property (copy, nonatomic) NSNumber *shouldFetchAssetContentInMemory;
@property (copy, nonatomic) NSNumber *useMMCSEncryptionV2;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
