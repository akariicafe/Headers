@class NSArray, NSDictionary, FAFamilyMember, NSString, FAEligibilityRequirements, FAFamilyCloudKitProperties;

@interface FAFamilyCircle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDictionary *_serverResponse;
@property (readonly, copy, nonatomic) NSArray *firstNames;
@property (readonly, copy, nonatomic) NSArray *invites;
@property (readonly, copy, nonatomic) NSArray *pendingMembers;
@property (readonly, nonatomic) FAFamilyMember *me;
@property (readonly, nonatomic) BOOL canAddMembers;
@property (readonly, copy, nonatomic) NSString *addMemberButtonLabel;
@property (readonly, copy, nonatomic) NSString *familyMembersFooterLabel;
@property (readonly, nonatomic) BOOL showAddMemberButton;
@property (readonly) NSArray *members;
@property (readonly) FAEligibilityRequirements *eligibilityRequirements;
@property (readonly) FAFamilyCloudKitProperties *cloudKitProperties;

- (id)initWithServerResponse:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)memberForAltDSID:(id)a0;
- (id)initWithCoder:(id)a0;

@end
