@class NSString, NSDictionary, FCEmailSignupConfig, FCHideMyEmailSignupConfig;

@interface FCChannelUpsellConfig : NSObject

@property (copy, nonatomic) NSString *channelID;
@property (retain, nonatomic) NSDictionary *triggersByMethod;
@property (nonatomic) long long presentationCap;
@property (nonatomic) long long presentationCountResetInterval;
@property (nonatomic) long long quiescenceInterval;
@property (nonatomic) long long engagedUserQuiescenceInterval;
@property (retain, nonatomic) FCEmailSignupConfig *emailSignupConfiguration;
@property (retain, nonatomic) FCHideMyEmailSignupConfig *hideMyEmailSignupConfiguration;

- (void).cxx_destruct;
- (id)initWithChannelID:(id)a0 configDictionary:(id)a1;

@end
