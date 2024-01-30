@class NSArray, NSDictionary, FAFamilyMember, NSString, FAEligibilityRequirements, FAFamilyCloudKitProperties;

@interface FAFamilyCircle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDictionary *_serverResponse;
@property (readonly, copy, nonatomic) NSArray *firstNames;
@property (readonly, copy, nonatomic) NSArray *invites;
@property (readonly, nonatomic) BOOL shouldShowInvites;
@property (readonly, copy, nonatomic) NSArray *pendingMembers;
@property (readonly, copy, nonatomic) NSArray *pendingMembersWithAllStatues;
@property (readonly, nonatomic) FAFamilyMember *me;
@property (readonly, nonatomic) NSString *childCutOffAge;
@property (readonly, nonatomic) BOOL canAddMembers;
@property (readonly, nonatomic) NSArray *allowedSubscriptions;
@property (readonly, copy, nonatomic) NSString *addMemberButtonLabel;
@property (readonly, copy, nonatomic) NSString *familyMembersFooterLabel;
@property (readonly, nonatomic) BOOL showAddMemberButton;
@property (readonly, nonatomic) BOOL showLocationSplashScreen;
@property (readonly, copy, nonatomic) NSString *ageCategory;
@property (readonly, copy, nonatomic) NSString *familyID;
@property (readonly) NSArray *members;
@property (readonly) FAEligibilityRequirements *eligibilityRequirements;
@property (readonly) FAFamilyCloudKitProperties *cloudKitProperties;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServerResponse:(id)a0;
- (id)init;
- (id)memberForAltDSID:(id)a0;
- (id)memberForPhoneNumber:(id)a0;
- (id)memberForDSID:(id)a0;
- (void).cxx_destruct;

@end
