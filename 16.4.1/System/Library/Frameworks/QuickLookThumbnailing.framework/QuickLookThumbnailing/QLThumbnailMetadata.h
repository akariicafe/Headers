@interface QLThumbnailMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property int inlinePreviewMode;
@property long long baseline;

+ (id)thumbnailMetadataFromPropertiesDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)propertiesDict;

@end
