@class NSString;

@interface LPBusinessChatMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *subtitle;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)previewSummaryForTransformer:(id)a0;
- (id)previewImageForTransformer:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)presentationPropertiesForTransformer:(id)a0;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
