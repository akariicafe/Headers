@class NSString, LPImage, NSDate;

@interface LPFileMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPMultipleMetadataPresentationTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) LPImage *thumbnail;
@property (retain, nonatomic) LPImage *icon;
@property (retain, nonatomic) NSDate *creationDate;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)summaryTypeForTransformer:(id)a0;
- (id)_fileTypeStringForTransformer:(id)a0;
- (id)_fileDetailStringForTransformer:(id)a0;
- (BOOL)_isWatchFace;
- (id)_nameForTransformer:(id)a0;
- (id)_bottomCaptionStringForTransformer:(id)a0;
- (BOOL)_shouldUseSquareIcon;
- (BOOL)_shouldUseCircularIcon;
- (BOOL)_shouldUseBackground;
- (id)_singleLineDescriptionForRemoteFileWithTransformer:(id)a0;
- (BOOL)_isPlainText;
- (BOOL)_isImage;
- (id)initWithCoder:(id)a0;
- (id)previewSummaryForTransformer:(id)a0;
- (id)previewImageForTransformer:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;
- (void)populateMetadataForBackwardCompatibility:(id)a0;
- (id)presentationPropertiesForTransformer:(id)a0;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
