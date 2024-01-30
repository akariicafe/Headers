@class SSRVoiceProfileManager;

@interface SRSVoiceProfileManager : NSObject {
    SSRVoiceProfileManager *_voiceProfileManager;
}

- (void)deleteUserVoiceProfile:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)markSATEnrollmentSuccessForVoiceProfile:(id)a0;
- (BOOL)hasVoiceProfileIniCloudForLanguageCode:(id)a0 backupMetaBlob:(id)a1;
- (BOOL)isSATEnrolledForSiriProfileId:(id)a0 languageCode:(id)a1;

@end
