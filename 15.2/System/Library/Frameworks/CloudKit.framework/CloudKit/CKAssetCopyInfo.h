@class NSData, NSURL, NSString;

@interface CKAssetCopyInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *fileSignature;
@property (copy, nonatomic) NSData *referenceSignature;
@property (copy, nonatomic) NSData *assetKey;
@property (copy, nonatomic) NSURL *assetURL;
@property (copy, nonatomic) NSString *senderID;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
