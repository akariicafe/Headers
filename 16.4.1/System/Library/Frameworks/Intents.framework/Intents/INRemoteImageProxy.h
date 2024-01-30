@class NSString;

@interface INRemoteImageProxy : INImage

@property (copy, nonatomic, setter=_setProxyIdentifier:) NSString *_proxyIdentifier;
@property (copy, nonatomic, setter=_setStorageServiceIdentifier:) NSString *_storageServiceIdentifier;
@property (readonly, nonatomic) BOOL isValid;

+ (BOOL)supportsSecureCoding;
+ (id)proxyImageSynchronously:(id)a0 usingService:(id)a1 error:(id *)a2;
+ (void)requestProxyByStoringImage:(id)a0 qualityOfService:(unsigned int)a1 scaled:(BOOL)a2 storeType:(unsigned long long)a3 completion:(id /* block */)a4;
+ (id)requestProxyByStoringImage:(id)a0 qualityOfService:(unsigned int)a1 scaled:(BOOL)a2 storeType:(unsigned long long)a3 error:(id *)a4;

- (id)_copyWithSubclass:(Class)a0;
- (void)_retrieveImageDataWithReply:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)_identifier;
- (BOOL)isEqual:(id)a0;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)purgeStoredImageWithCompletion:(id /* block */)a0;
- (id)_URLRepresentation;
- (id)_initWithURLRepresentation:(id)a0;
- (id)retrieveProxiedImageSynchronouslyUsingService:(id)a0 error:(id *)a1;
- (void)unproxyImageFromService:(id)a0 reply:(id /* block */)a1;

@end
