@class ISImageCache, NSUUID;

@interface ISConcreteIcon : ISIcon <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) ISImageCache *imageCache;
@property (readonly) NSUUID *digest;

- (void)encodeWithCoder:(id)a0;
- (id)symbol;
- (id)initWithCoder:(id)a0;
- (id)imageForDescriptor:(id)a0;
- (void)_prepareImagesForImageDescriptors:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)_fallbackKey;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)makeResourceProvider;
- (id)makeSymbolResourceProvider;
- (double)_aspectRatio;
- (void).cxx_destruct;
- (void)resolve;
- (id)_imageForSymbolImageDescriptor:(id)a0;
- (id)initWithDigest:(id)a0;
- (id)_cachedImageForDescriptor:(id)a0;
- (id)_imageFromStoreForDescriptor:(id)a0;
- (id)_placeholderImageWithImageDescriptor:(id)a0 markAsPlaceholder:(BOOL)a1;
- (unsigned long long)assessValidationToken:(id)a0;
- (id)generateImageWithDescriptor:(id)a0;
- (void)generateImageWithDescriptor:(id)a0 completion:(id /* block */)a1;
- (BOOL)isEqualToIcon:(id)a0;

@end
