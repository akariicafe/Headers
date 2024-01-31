@class NSData, NSString;

@interface CKEncryptedData : NSObject <CKEncryptable, CKRecordValue, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSData *data;
@property (copy) NSData *encryptedData;
@property (readonly, nonatomic) BOOL needsEncryption;
@property (readonly, nonatomic) BOOL needsDecryption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithValue:(id)a0;
- (id)CKPropertiesDescription;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEncryptedData:(id)a0;

@end
