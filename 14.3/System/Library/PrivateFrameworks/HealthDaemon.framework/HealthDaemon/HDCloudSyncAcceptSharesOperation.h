@class NSArray, NSDictionary, CKShareParticipant;

@interface HDCloudSyncAcceptSharesOperation : HDCloudSyncOperation

@property (readonly, copy, nonatomic) NSArray *shareURLs;
@property (readonly, copy, nonatomic) NSDictionary *invitationTokensByShareURLs;
@property (readonly, copy, nonatomic) NSArray *acceptedShares;
@property (readonly, copy, nonatomic) CKShareParticipant *ownerParticipant;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 shareURLs:(id)a2 invitationTokensByShareURL:(id)a3;
- (void)_acceptSharesWithShareMetadata:(id)a0;

@end
