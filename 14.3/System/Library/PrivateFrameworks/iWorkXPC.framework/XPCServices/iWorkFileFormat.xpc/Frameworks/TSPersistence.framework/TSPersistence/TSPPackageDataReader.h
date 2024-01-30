@class TSPDocumentProperties, NSString, NSURL, SFUCryptoKey, NSData, TSPPackage;

@interface TSPPackageDataReader : NSObject <TSPFileCoordinatorDelegate, TSPPassphraseConsumer> {
    TSPPackage *_package;
    NSString *_lastPasswordAttempted;
}

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) long long packageType;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) TSPDocumentProperties *documentProperties;
@property (readonly, nonatomic) BOOL isPasswordProtected;
@property (readonly, nonatomic) NSString *passwordHint;
@property (readonly, nonatomic) SFUCryptoKey *lastDecryptionKeyAttempted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *lastPasswordAttempted;
@property (readonly, nonatomic) NSString *passphraseHint;
@property (readonly, nonatomic) NSData *keychainGenericItem;
@property (readonly, nonatomic) BOOL requiresNetworkValidation;

- (id)init;
- (void).cxx_destruct;
- (BOOL)setPassphrase:(id)a0;
- (id)initWithURL:(id)a0 decryptionKey:(id)a1;
- (void)performReadUsingAccessor:(id /* block */)a0;
- (BOOL)checkPassword:(id)a0;
- (BOOL)hasDataAtRelativePath:(id)a0;
- (struct CGImageSource { } *)newCGImageSourceAtRelativePath:(id)a0;
- (struct CGDataProvider { } *)newCGDataProviderAtRelativePath:(id)a0;
- (struct CGImage { } *)newCGImageAtRelativePath:(id)a0;

@end
