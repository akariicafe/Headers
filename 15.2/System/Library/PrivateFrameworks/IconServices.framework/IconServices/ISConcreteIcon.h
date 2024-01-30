@class ISImageCache, NSUUID;

@interface ISConcreteIcon : ISIcon <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) ISImageCache *imageCache;
@property (readonly) NSUUID *digest;

- (void)resolve;
- (id)symbol;
- (void)_prepareImagesForImageDescriptors:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)makeSymbolResourceProvider;
- (double)_aspectRatio;
- (id)_fallbackKey;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)makeResourceProvider;
- (unsigned long long)hash;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)imageForDescriptor:(id)a0;
- (id)_imageForSymbolImageDescriptor:(id)a0;
- (id)initWithDigest:(id)a0;
- (BOOL)isEqualToIcon:(id)a0;
- (id)_imageFromStoreForDescriptor:(id)a0;
- (unsigned long long)assessValidationToken:(id)a0;
- (id)_placeholderImageWithImageDescriptor:(id)a0 markAsPlaceholder:(BOOL)a1;
- (id)_cachedImageForDescriptor:(id)a0;
- (id)generateImageWithDescriptor:(id)a0;
- (void)generateImageWithDescriptor:(id)a0 completion:(id /* block */)a1;

@end
