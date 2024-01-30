@class NSData, NSUUID;

@interface _INDataImage : INImage {
    NSUUID *_sha256HashUUID;
}

@property (readonly, copy, nonatomic) NSData *imageData;

+ (BOOL)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (void)_setImageData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithImageData:(id)a0;
- (id)_imageData;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_identifier;
- (id)_sha256HashUUID;
- (void)_retrieveImageDataWithReply:(id /* block */)a0;
- (id)_copyWithSubclass:(Class)a0;
- (BOOL)_isEligibleForProxying;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (id)initWithCoder:(id)a0;
- (BOOL)_requiresRetrieval;

@end
