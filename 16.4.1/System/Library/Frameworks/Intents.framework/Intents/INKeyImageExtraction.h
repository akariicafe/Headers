@class INImage, NSString, NSMutableDictionary;

@interface INKeyImageExtraction : NSObject <INImageStoring, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setImageTypeToStore:) long long _imageTypeToStore;
@property (copy, nonatomic) INImage *keyImage;
@property (copy, nonatomic) NSString *proxyIdentifier;
@property (copy, nonatomic) NSMutableDictionary *keyImagesByType;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) unsigned long long servicePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)retrieveImageWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)storeImage:(id)a0 scaled:(BOOL)a1 qualityOfService:(unsigned int)a2 storeType:(unsigned long long)a3 error:(id *)a4;
- (id)initWithCoder:(id)a0;
- (BOOL)canStoreImage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)purgeImageWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)retrieveImageSynchronouslyForIdentifier:(id)a0 error:(id *)a1;
- (id)storeImageSynchronously:(id)a0 error:(id *)a1;

@end
