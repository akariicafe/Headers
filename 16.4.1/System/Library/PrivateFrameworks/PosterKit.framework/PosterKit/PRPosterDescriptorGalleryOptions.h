@class PRPosterDescriptorGalleryAssetLookupInfo;

@interface PRPosterDescriptorGalleryOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) PRPosterDescriptorGalleryAssetLookupInfo *galleryAssetLookupInfo;
@property (readonly, nonatomic) unsigned long long presentationStyle;

+ (id)galleryOptionsFromDictionaryRepresentation:(id)a0;
+ (id)galleryOptionsWithAssetLookupInfo:(id)a0;
+ (id)galleryOptionsWithAssetLookupInfo:(id)a0 galleryPresentationStyle:(unsigned long long)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAssetLookupInfo:(id)a0 galleryPresentationStyle:(unsigned long long)a1;

@end
