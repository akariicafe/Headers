@class NSString, NSURLProtectionSpace, NSURL;

@interface WBUGeneratedPasswordCredentialUpdateRequest : NSObject

@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *generatedPassword;
@property (readonly, copy, nonatomic) NSString *lastGeneratedPassword;
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, nonatomic) NSURL *urlForCredential;
@property (readonly, nonatomic) BOOL shouldSaveNewCredential;

+ (id)requestWithNewUsername:(id)a0 newGeneratedPassword:(id)a1 lastGeneratedPassword:(id)a2 credentialURL:(id)a3 protectionSpace:(id)a4 shouldSaveNewCredential:(BOOL)a5;

- (void).cxx_destruct;
- (id)_initRequestWithNewUsername:(id)a0 newGeneratedPassword:(id)a1 lastGeneratedPassword:(id)a2 credentialURL:(id)a3 protectionSpace:(id)a4 shouldSaveNewCredential:(BOOL)a5;

@end
