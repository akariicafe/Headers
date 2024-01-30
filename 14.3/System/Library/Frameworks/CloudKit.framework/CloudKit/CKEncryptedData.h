@class NSData, NSString;

@interface CKEncryptedData : NSObject <CKRecordValue, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSData *encryptedData;
@property (readonly, nonatomic) BOOL needsEncryption;
@property (readonly, nonatomic) BOOL needsDecryption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)CKPropertiesDescription;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)value;
- (id)initWithCoder:(id)a0;
- (id)initWithEncryptedData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
