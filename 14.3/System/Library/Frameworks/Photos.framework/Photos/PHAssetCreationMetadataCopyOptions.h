@interface PHAssetCreationMetadataCopyOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldCopyTitleDescriptionAndKeywords;
@property (nonatomic) BOOL shouldCopySpatialOverCaptureResources;

+ (id)metadataCopyOptionsForPublishingOriginals;

- (void)encodeToXPCDict:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)plRepresentation;
- (id)initWithXPCDict:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
