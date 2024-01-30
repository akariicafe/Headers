@class NSData, NSUUID;

@interface _INDataImage : INImage {
    NSUUID *_sha256HashUUID;
}

@property (readonly, copy, nonatomic) NSData *imageData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_identifier;
- (id)initWithCoder:(id)a0;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (BOOL)_requiresRetrieval;
- (BOOL)isEqual:(id)a0;
- (id)_sha256HashUUID;
- (id)initWithImageData:(id)a0;
- (void)_retrieveImageDataWithReply:(id /* block */)a0;
- (id)_copyWithSubclass:(Class)a0;
- (void)_setImageData:(id)a0;
- (BOOL)_isEligibleForProxying;
- (id)_imageData;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
