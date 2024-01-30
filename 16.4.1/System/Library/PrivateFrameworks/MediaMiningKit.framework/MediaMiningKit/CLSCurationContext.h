@class CLSCurationSession, NSSet, NSDictionary, PHPhotoLibrary, PHUserFeedbackCalculator;

@interface CLSCurationContext : NSObject {
    NSSet *_verifiedPersonUUIDs;
    NSSet *_hiddenOrBlockedPersonUUIDs;
    NSSet *_nonPetFacedPersonLocalIdentifiers;
    NSDictionary *_personUUIDByMergeCandidateUUID;
}

@property (class, readonly, nonatomic) double mergeCandidateConfidenceThreshold;

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PHUserFeedbackCalculator *userFeedbackCalculator;
@property (readonly, nonatomic) CLSCurationSession *curationSession;

- (id)initWithPhotoLibrary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 curationSession:(id)a1;
- (id)initWithUserFeedbackCalculator:(id)a0 curationSession:(id)a1;
- (id)personUUIDByMergeCandidateUUID;
- (void)_loadNonPetFacedPersonLocalIdentifiers;
- (void)_loadPersonAndMergeCandidateUUIDs;
- (id)_mergeCandidateUUIDsForPerson:(id)a0;
- (id)hiddenOrBlockedPersonUUIDs;
- (id)nonPetFacedPersonLocalIdentifiers;
- (id)verifiedPersonUUIDs;

@end
