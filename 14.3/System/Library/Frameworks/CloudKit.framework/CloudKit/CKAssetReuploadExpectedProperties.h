@class NSData;

@interface CKAssetReuploadExpectedProperties : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *fileSignature;
@property (copy, nonatomic) NSData *referenceSignature;
@property (copy, nonatomic) NSData *assetKey;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
