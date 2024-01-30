@class NSArray, NSError, NSString;

@interface EMSecurityInformation : NSObject <NSSecureCoding, EFPubliclyDescribable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEncrypted;
@property (readonly, nonatomic) BOOL isSigned;
@property (readonly, nonatomic) NSArray *signers;
@property (readonly, nonatomic) BOOL hasEncryptedDescendantPart;
@property (readonly, nonatomic) NSError *smimeError;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSigners:(id)a0 isEncrypted:(BOOL)a1 hasEncryptedDescendantPart:(BOOL)a2 smimeError:(id)a3;
- (void)reevaluateTrustWithNetworkAccessAllowed;
- (void)encodeWithCoder:(id)a0;

@end
