@class CRKASMCredentialStore, NSString;
@protocol CRKIdentity;

@interface CRKASMIdentityPicker : NSObject

@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore;
@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly, nonatomic) id<CRKIdentity> identity;

- (void).cxx_destruct;
- (id)manifest;
- (id)initWithCredentialStore:(id)a0 userIdentifier:(id)a1;
- (id)candidatePersistentIDsInManifest:(id)a0;
- (id)pickIdentityFromCandidates:(id)a0 manifest:(id)a1;
- (BOOL)isManifestEntryValid:(id)a0 manifest:(id)a1;
- (id)arrayBySortingPersistentIDs:(id)a0;
- (id)pickIdentityFromOrderedCandidates:(id)a0 manifest:(id)a1;

@end
