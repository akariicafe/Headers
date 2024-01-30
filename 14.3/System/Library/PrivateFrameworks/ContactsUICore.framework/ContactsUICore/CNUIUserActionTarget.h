@class NSString;
@protocol CNTUCallProvider;

@interface CNUIUserActionTarget : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (readonly, nonatomic) NSString *actionType;
@property (retain) id<CNTUCallProvider> callProvider;

+ (id)targetForDirections;
+ (id)targetForTextWithMessages;
+ (id)descriptorForRequiredKeysForActionDiscovering;
+ (id)targetForEmailWithMail;
+ (id)targetForPayWithWallet;
+ (id)targetForVoiceWithTelephony;
+ (id)targetForVoiceWithFaceTime;
+ (id)targetForVoiceWithSkype;
+ (id)targetForVideoWithFaceTime;
+ (id)targetForVideoWithSkype;
+ (id)targetForTextWithSkype;
+ (id)targetForVoiceWithCallProvider:(id)a0;
+ (id)targetForVideoWithCallProvider:(id)a0;
+ (id)targetForStartAudioCallIntentWithAppProxy:(id)a0;
+ (id)targetForStartVideoCallIntentWithAppProxy:(id)a0;
+ (id)targetForSendMessageIntentWithAppProxy:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)actionsForContact:(id)a0 discoveringEnvironment:(id)a1;
- (id)actionsForEmailAddresses:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)actionsForPhoneNumbers:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)actionsForSocialProfiles:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)actionsForInstantMessageAddresses:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;
- (id)initWithName:(id)a0 bundleIdentifier:(id)a1 teamIdentifier:(id)a2;
- (id)actionsForPostalAddresses:(id)a0 contact:(id)a1 discoveringEnvironment:(id)a2;

@end
