@class NSString, SGSocialProfileDetails, NSPersonNameComponents, NSDate, INPersonHandle;

@interface SGParsedPersonFromInteraction : NSObject {
    INPersonHandle *_handle;
}

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *groupId;
@property (readonly, nonatomic) NSString *interactionIdentifier;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) SGSocialProfileDetails *socialProfile;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *contactIdentifier;

+ (id)_peopleFromInteraction:(id)a0;
+ (id)parseInteraction:(id)a0 bundleId:(id)a1;
+ (id)intentClassWhitelist;

- (void).cxx_destruct;
- (id)initWithPerson:(id)a0 bundleId:(id)a1 interactionIdentifier:(id)a2 groupId:(id)a3 date:(id)a4;
- (void)_harvestPerson:(id)a0 handle:(id)a1 suggestionType:(long long)a2 bundleId:(id)a3;
- (void)_harvestEmail:(id)a0;
- (void)_harvestPhoneNumber:(id)a0;
- (void)_harvestSocialProfile:(id)a0 handle:(id)a1 bundleId:(id)a2;
- (void)grabNameIfNeededFromContactStore:(id)a0;
- (id)pipelineEntity;

@end
