@class NSString, PKEncryptedDataObject, NSDate;

@interface PKBarcodeCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *expirationTimestamp;
@property (retain, nonatomic) PKEncryptedDataObject *value;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
