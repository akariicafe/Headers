@class NSString, LPImage, LPArtworkMetadata;

@interface LPiTunesMediaRadioMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataStoreTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *curator;
@property (retain, nonatomic) LPImage *artwork;
@property (copy, nonatomic) LPArtworkMetadata *artworkMetadata;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)previewSummaryForTransformer:(id)a0;
- (id)previewImageForTransformer:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;
- (void)populateMetadataForBackwardCompatibility:(id)a0;
- (id)presentationPropertiesForTransformer:(id)a0;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)a0;
- (id)storeIdentifierForTransformer:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
