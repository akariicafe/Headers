@class NSNumber;

@interface CKAssetTransferOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *sparseAware;
@property (copy, nonatomic) NSNumber *shouldFetchAssetContent;
@property (copy, nonatomic) NSNumber *shouldFetchAssetContentInMemory;
@property (copy, nonatomic) NSNumber *useMMCSEncryptionV2;

- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
