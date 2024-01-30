@class NSURL, NSData;

@interface _INURLImage : INImage {
    NSData *_sandboxExtensionData;
}

@property (readonly, copy, nonatomic) NSURL *imageURL;

+ (BOOL)supportsSecureCoding;

- (id)_uri;
- (void).cxx_destruct;
- (id)_identifier;
- (id)initWithImageURL:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)_setUri:(id)a0;
- (BOOL)_requiresRetrieval;
- (id)_copyWithSubclass:(Class)a0;
- (BOOL)_isEligibleForProxying;
- (id)_initWithURLRepresentation:(id)a0;
- (id)_sandboxExtensionData;
- (void)_setSandboxExtensionData:(id)a0;
- (id)_URLRepresentation;
- (BOOL)_isSupportedForDonation;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
