@class NSString, FTUserAcousticProfile;

@interface FTMutableUpdatedAcousticProfile : FTUpdatedAcousticProfile

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) FTUserAcousticProfile *updated_acoustic_profile;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
