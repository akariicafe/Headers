@class FTUserAcousticProfile, NSArray, NSString, FTStartSpeechRequest, FTUserLanguageProfile;

@interface FTMutableErrorBlamerRequest : FTErrorBlamerRequest

@property (copy, nonatomic) FTStartSpeechRequest *start_speech_request;
@property (copy, nonatomic) NSArray *contextual_text;
@property (copy, nonatomic) NSString *left_context;
@property (copy, nonatomic) NSString *right_context;
@property (copy, nonatomic) FTUserLanguageProfile *user_language_profile;
@property (copy, nonatomic) FTUserAcousticProfile *user_acoustic_profile;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSArray *audio_packets;
@property (copy, nonatomic) NSString *ref_transcript;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
