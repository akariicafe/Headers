@class NSString, NSDictionary, NSURL, NSNumber;

@interface PKRemoteAssetManifestItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *localURL;
@property (copy, nonatomic) NSURL *remoteURL;
@property (copy, nonatomic) NSURL *passURL;
@property (copy, nonatomic) NSString *sha1Hex;
@property (copy, nonatomic) NSNumber *size;
@property (copy, nonatomic) NSDictionary *manifest;
@property (copy, nonatomic) NSURL *encryptedContentsLocalURL;
@property (copy, nonatomic) NSString *ephemeralPublicKey;
@property (copy, nonatomic) NSString *publicKeyHash;
@property (copy, nonatomic) NSString *seid;
@property (copy, nonatomic) NSString *encryptionScheme;
@property (nonatomic) long long encryptionSource;
@property (readonly, nonatomic) unsigned long long itemType;
@property (readonly, weak, nonatomic) NSString *relativeLocalPath;
@property (readonly, weak, nonatomic) NSString *relativeEncryptedContentsLocalPath;

+ (id)sharedURLSession;
+ (id)itemWithLocalURL:(id)a0 passURL:(id)a1 dictionary:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isZipFile;
- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)a0 completion:(id /* block */)a1;
- (id)initWithLocalURL:(id)a0 passURL:(id)a1 dictionary:(id)a2 error:(id *)a3;
- (void)downloadAssetWithCompletion:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
