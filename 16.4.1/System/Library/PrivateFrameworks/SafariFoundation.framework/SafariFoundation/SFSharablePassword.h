@class NSString, NSArray, NSURL, NSData;

@interface SFSharablePassword : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasAnyCredentialData;
@property (readonly, nonatomic) BOOL hasPasswordWithConflicts;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *highLevelDomain;
@property (readonly, copy, nonatomic) NSURL *otpAuthURL;
@property (readonly, copy, nonatomic) NSString *notesEntry;
@property (readonly, copy, nonatomic) NSArray *protectionSpaces;
@property (readonly, nonatomic) NSURL *passwordManagerURL;
@property (readonly, copy, nonatomic) NSData *passkeyCredentialID;
@property (readonly, copy, nonatomic) NSData *passkeyCredential;
@property (readonly, copy, nonatomic) NSString *passkeyRelyingPartyID;

+ (BOOL)safariCredentialURLHasPasskey:(id)a0;
+ (id)sharablePasswordFromData:(id)a0;
+ (id)sharablePasswordFromURL:(id)a0;
+ (id)sharablePasswordFromEncryptedData:(id)a0 encryptionKeyReference:(id)a1;
+ (id)_decryptedDataForEncryptedData:(id)a0 encryptionKeyReference:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)saveToKeychain;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithSavedPassword:(id)a0;
- (void)savePasskeyAccountAndMergeIntoSavedPasswordAccountIfNeeded:(id)a0;
- (id)urlRepresentationForAirDrop;
- (BOOL)_hasPasskeyData;
- (void)_saveNotesEntryForSavedAccount:(id)a0;
- (id)_encryptionInformationWithNewKey;
- (BOOL)_hasPasswordData;
- (id)_queryItemsForAirDropRepresentationWithEncryptionInformation:(id)a0;
- (void)_saveOneTimeCodeForSavedAccount:(id)a0;
- (id)_savePasskeyAccount;
- (id)_savePasswordAccount;
- (id)_usernameOrEmptyString;
- (id)initWithUsername:(id)a0 password:(id)a1 displayName:(id)a2 highLevelDomain:(id)a3 passkeyRelyingPartyID:(id)a4 protectionSpaces:(id)a5;

@end
