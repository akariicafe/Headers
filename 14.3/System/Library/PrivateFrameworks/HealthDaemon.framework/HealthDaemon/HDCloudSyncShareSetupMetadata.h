@class CKShareParticipant, NSString, NSArray, NSDictionary, HKProfileIdentifier;

@interface HDCloudSyncShareSetupMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *syncCircleIdentifier;
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, copy, nonatomic) NSArray *shareURLs;
@property (readonly, copy, nonatomic) NSDictionary *invitationTokensByShareURL;
@property (readonly, copy, nonatomic) CKShareParticipant *ownerParticipant;
@property (readonly, copy, nonatomic) NSString *ownerCloudKitEmailAddress;
@property (readonly, copy, nonatomic) CKShareParticipant *shareParticipant;

+ (id)cloudSyncShareSetupMetadataWithCodableSharingSetupMetadata:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)codableSharingSetupMetadataWithError:(id *)a0;
- (id)initWithSyncCircleIdentifier:(id)a0 profileIdentifier:(id)a1 shareURLs:(id)a2 ownerParticipant:(id)a3 ownerCloudKitEmailAddress:(id)a4 shareParticipant:(id)a5 invitationTokensByShareURL:(id)a6;

@end
