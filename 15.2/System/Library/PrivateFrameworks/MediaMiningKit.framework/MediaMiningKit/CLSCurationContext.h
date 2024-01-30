@class NSSet, NSDictionary, PHPhotoLibrary, PHUserFeedbackCalculator;

@interface CLSCurationContext : NSObject {
    NSSet *_verifiedPersonUUIDs;
    NSSet *_hiddenOrBlockedPersonUUIDs;
    NSSet *_nonPetFacedPersonLocalIdentifiers;
    NSDictionary *_personUUIDByMergeCandidateUUID;
}

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PHUserFeedbackCalculator *userFeedbackCalculator;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)_mergeCandidateUUIDsForPerson:(id)a0;
- (id)initWithUserFeedbackCalculator:(id)a0;
- (id)nonPetFacedPersonLocalIdentifiers;
- (id)personUUIDByMergeCandidateUUID;
- (id)verifiedPersonUUIDs;
- (id)hiddenOrBlockedPersonUUIDs;
- (void)_loadPersonAndMergeCandidateUUIDs;
- (void)_loadNonPetFacedPersonLocalIdentifiers;
- (BOOL)_shouldFetchMergeCandidatesForPerson:(id)a0;

@end
