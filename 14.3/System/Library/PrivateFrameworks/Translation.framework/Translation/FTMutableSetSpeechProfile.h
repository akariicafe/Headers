@class NSString, FTUserLanguageProfile, FTUserAcousticProfile;

@interface FTMutableSetSpeechProfile : FTSetSpeechProfile

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) FTUserLanguageProfile *user_language_profile;
@property (copy, nonatomic) FTUserAcousticProfile *user_acoustic_profile;
@property (copy, nonatomic) NSString *language;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
