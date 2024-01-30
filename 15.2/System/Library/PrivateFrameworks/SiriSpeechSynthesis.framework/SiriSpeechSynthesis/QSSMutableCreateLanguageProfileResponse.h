@class NSString, QSSUserLanguageProfile;

@interface QSSMutableCreateLanguageProfileResponse : QSSCreateLanguageProfileResponse

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int error_code;
@property (copy, nonatomic) NSString *error_str;
@property (copy, nonatomic) QSSUserLanguageProfile *user_language_profile;
@property (nonatomic) BOOL incomplete_profile;
@property (nonatomic) BOOL recreate_apg_prons;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
