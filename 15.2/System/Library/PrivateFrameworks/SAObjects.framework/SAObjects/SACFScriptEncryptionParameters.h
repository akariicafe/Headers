@class NSData, NSString;

@interface SACFScriptEncryptionParameters : SABaseAceObject

@property (copy, nonatomic) NSData *encryptionKey;
@property (copy, nonatomic) NSData *hmac;
@property (copy, nonatomic) NSData *hmacKey;
@property (copy, nonatomic) NSData *initializationVector;
@property (copy, nonatomic) NSString *type;

+ (id)scriptEncryptionParameters;
+ (id)scriptEncryptionParametersWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
