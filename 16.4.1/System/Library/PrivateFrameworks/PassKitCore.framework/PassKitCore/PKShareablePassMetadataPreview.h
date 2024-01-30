@class PKImage, NSString, NSURL;

@interface PKShareablePassMetadataPreview : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKImage *pkPassThumbnailImage;
@property (nonatomic) struct CGImage { } *passThumbnailImage;
@property (retain, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) NSString *provisioningTemplateIdentifier;
@property (retain, nonatomic) NSURL *thumbnailURL;
@property (retain, nonatomic) NSString *ownerDisplayName;

+ (id)new;
+ (id)previewWithPassThumbnail:(struct CGImage { } *)a0 localizedDescription:(id)a1;
+ (id)previewWithTemplateIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithPassThumbnail:(struct CGImage { } *)a0 localizedDescription:(id)a1 provisioningTemplateIdentifier:(id)a2;
- (id)initWithPassThumbnail:(struct CGImage { } *)a0 localizedDescription:(id)a1;
- (id)initWithTemplateIdentifier:(id)a0;

@end
