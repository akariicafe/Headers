@class IDSMPPublicAccountIdentity;

@interface IDSMPPublicAccountIdentityCluster : IDSMPIdentity

@property (readonly, nonatomic) IDSMPPublicAccountIdentity *publicAccountIdentity;

- (BOOL)isParentOfCluster:(id)a0;
- (id)dataRepresentationWithError:(id *)a0;

@end
