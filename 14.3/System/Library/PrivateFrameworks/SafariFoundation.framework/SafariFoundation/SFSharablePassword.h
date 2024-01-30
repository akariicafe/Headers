@class NSString, NSArray, NSURL;

@interface SFSharablePassword : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *highLevelDomain;
@property (readonly, copy, nonatomic) NSArray *protectionSpaces;
@property (readonly, nonatomic) NSURL *passwordManagerURL;

+ (id)sharablePasswordFromData:(id)a0;
+ (id)sharablePasswordFromURL:(id)a0;
+ (id)sharablePasswordFromEncryptedData:(id)a0 encryptionKeyReference:(id)a1;
+ (id)_decryptedDataForEncryptedData:(id)a0 encryptionKeyReference:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithUsername:(id)a0 password:(id)a1 displayName:(id)a2 highLevelDomain:(id)a3 protectionSpaces:(id)a4;
- (id)urlRepresentationForAirDrop;
- (void)encodeWithCoder:(id)a0;
- (id)_encryptionInformationWithNewKey;

@end
