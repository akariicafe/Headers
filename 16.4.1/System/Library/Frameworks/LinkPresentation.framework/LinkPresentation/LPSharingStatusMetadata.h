@class NSString, NSAttributedString;

@interface LPSharingStatusMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSAttributedString *status;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)a0;
- (id)presentationPropertiesForTransformer:(id)a0;

@end
