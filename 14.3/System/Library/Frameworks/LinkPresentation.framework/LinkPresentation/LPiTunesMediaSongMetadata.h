@class NSString, NSArray, NSURL, LPImage, LPArtworkMetadata;

@interface LPiTunesMediaSongMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataStoreTransformer, LPLinkMetadataStatusTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *lyrics;
@property (retain, nonatomic) LPImage *artwork;
@property (copy, nonatomic) LPArtworkMetadata *artworkMetadata;
@property (copy, nonatomic) NSURL *previewURL;
@property (copy, nonatomic) NSArray *offers;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (id)statusForText:(id)a0;
+ (id)transcriptBoldTextFont;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)previewSummaryForTransformer:(id)a0;
- (id)previewImageForTransformer:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;
- (void)populateMetadataForBackwardCompatibility:(id)a0;
- (void)initializeForTransformer:(id)a0;
- (void)destroyForTransformer:(id)a0;
- (id)statusForTransformer:(id)a0;
- (id)actionURLForTransformer:(id)a0;
- (id)presentationPropertiesForTransformer:(id)a0;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)a0;
- (id)inlinePlaybackInformationForURL:(id)a0;
- (id)storeIdentifierForTransformer:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
