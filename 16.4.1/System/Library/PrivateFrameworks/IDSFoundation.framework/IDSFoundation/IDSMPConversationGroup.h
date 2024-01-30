@class ENGroupID, NSString, NSData, NSDictionary;

@interface IDSMPConversationGroup : NSObject

@property (readonly, nonatomic) ENGroupID *groupID;
@property (readonly, nonatomic) NSData *publicKeyData;
@property (readonly, nonatomic) NSData *forwardingTicket;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, nonatomic) NSData *applicationData;
@property (readonly, nonatomic) NSString *sponsorAlias;
@property (readonly, nonatomic) NSDictionary *groupMembers;

+ (id)conversationGroupWithConversationKey:(id)a0 fromPublicData:(id)a1 publicKey:(id)a2 signature:(id)a3 groupID:(id)a4 parent:(id)a5 parentPublicKey:(id)a6 forwardingTicket:(id)a7 sponsor:(id)a8 error:(id *)a9;
+ (id)conversationGroupWithParent:(id)a0 members:(id)a1 sponsor:(id)a2 applicationData:(id)a3 error:(id *)a4;
+ (id)conversationGroupWithParent:(id)a0 members:(id)a1 sponsorAlias:(id)a2 sponsor:(id)a3 applicationData:(id)a4 error:(id *)a5;
+ (id)conversationGroupWithParent:(id)a0 sponsor:(id)a1 deviceIdentity:(id)a2 groupID:(id)a3 publicKeyData:(id)a4 publicData:(id)a5 signature:(id)a6 error:(id *)a7;
+ (id)conversationGroupWithPrivateDataRepresentation:(id)a0;
+ (id)conversationSponsorPairFromPublicData:(id)a0 publicKey:(id)a1 signature:(id)a2 groupID:(id)a3 parent:(id)a4 parentPublicKey:(id)a5 forwardingTicket:(id)a6 fullDeviceIdentity:(id)a7 error:(id *)a8;

- (id)signData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)conversationGroupWithUpdatedGroupID:(id)a0 error:(id *)a1;
- (BOOL)isParentOfGroup:(id)a0;
- (id)privateDataRepresentationWithError:(id *)a0;
- (id)publicDataRepresentationWithSponsor:(id)a0 error:(id *)a1;
- (id)signAndProtectData:(id)a0 senderSigningIdentity:(id)a1 members:(id)a2 error:(id *)a3;
- (id)verifyAndExposeData:(id)a0 senderSigningIdentity:(id)a1 members:(id)a2 error:(id *)a3;

@end
