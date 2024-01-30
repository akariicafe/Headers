@class QLCacheFileProviderVersionedFileIdentifier, FPItem;

@interface QLTUbiquitousFileThumbnailRequest : QLTThumbnailRequest

@property (readonly) FPItem *item;
@property (readonly) QLCacheFileProviderVersionedFileIdentifier *fileIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)computeContentType;
- (id)initWithFPItem:(id)a0 size:(struct CGSize { double x0; double x1; })a1 minimumDimension:(double)a2 scale:(double)a3 iconMode:(BOOL)a4;
- (BOOL)shouldProvideFoldedGenericIcon;

@end
