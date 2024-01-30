@class NSDictionary;

@interface IDSLocalPairingRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *protectionClassIdentityDataMap;

- (void).cxx_destruct;
- (id)identityDataForDataProtectionClass:(unsigned int)a0 error:(id *)a1;
- (id)initWithIdentityDataClassA:(id)a0 classC:(id)a1 classD:(id)a2;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
