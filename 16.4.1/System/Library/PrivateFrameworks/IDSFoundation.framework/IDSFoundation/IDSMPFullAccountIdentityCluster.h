@class ENGroupID, IDSMPFullAccountIdentity, NSArray, NSData;

@interface IDSMPFullAccountIdentityCluster : IDSMPIdentity

@property (readonly, nonatomic) ENGroupID *groupID;
@property (readonly, nonatomic) IDSMPFullAccountIdentity *fullAccountIdentity;
@property (readonly, nonatomic) NSArray *fullServiceIdentitiesAdmin;
@property (readonly, nonatomic) NSArray *fullServiceIdentitiesSigning;
@property (readonly, nonatomic) struct __SecKey { } *publicKey;
@property (readonly, nonatomic) NSData *forwardingTicket;

+ (id)clusterWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)clusterWithFullAccountIdentity:(id)a0 fullAdminServiceIdentities:(id)a1 fullSigningServiceIdentities:(id)a2 error:(id *)a3;

- (id)dataRepresentationWithError:(id *)a0;
- (id)signingServiceIdentityWithType:(long long)a0;
- (id)clusterByUpdatingGroupID:(id)a0 error:(id *)a1;
- (id)adminServiceIdentityWithType:(long long)a0;
- (BOOL)isParentOfCluster:(id)a0;
- (id)publicAccountClusterWithError:(id *)a0;
- (id)rolledClusterWithFullAccountIdentity:(id)a0 fullAdminServiceIdentities:(id)a1 fullSigningServiceIdentities:(id)a2 error:(id *)a3;
- (id)signData:(id)a0 withError:(id *)a1;

@end
