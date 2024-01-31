@class NSNumber;

@interface CKAssetTransferOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *sparseAware;
@property (copy) NSNumber *shouldFetchAssetContent;
@property (copy) NSNumber *shouldFetchAssetContentInMemory;
@property (copy) NSNumber *useMMCSEncryptionV2;

- (void)encodeWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
