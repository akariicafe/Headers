@class NSDictionary;

@interface PRPosterDescriptorGalleryAssetLookupInfo : NSObject <NSSecureCoding, NSCopying> {
    NSDictionary *_lookupInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultLookupInfo;
+ (id)lookUpInfoForAssetCatalogIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetCatalogIdentifier:(id)a0;
- (id)imageFromBundle:(id)a0 traitCollection:(id)a1 error:(out id *)a2;

@end
