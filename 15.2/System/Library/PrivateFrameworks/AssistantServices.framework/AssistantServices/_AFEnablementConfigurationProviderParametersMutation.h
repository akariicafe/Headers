@class NSString, AFEnablementConfigurationProviderParameters, AFExperiment, NSError, NSDate, NSDictionary;

@interface _AFEnablementConfigurationProviderParametersMutation : NSObject <AFEnablementConfigurationProviderParametersMutating> {
    AFEnablementConfigurationProviderParameters *_baseModel;
    long long _enablementFlow;
    BOOL _newUser;
    NSError *_userStatusFetchError;
    NSDate *_dateStartedResolvingUserStatus;
    NSDate *_dateEndedResolvingUserStatus;
    AFExperiment *_experiment;
    NSError *_experimentFetchError;
    NSDate *_dateStartedResolvingExperiment;
    NSDate *_dateEndedResolvingExperiment;
    NSDictionary *_outputVoiceCountForRecognitionLanguage;
    BOOL _recognitionLanguageWithMultipleOutputVoicesExists;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasEnablementFlow : 1; unsigned char hasNewUser : 1; unsigned char hasUserStatusFetchError : 1; unsigned char hasDateStartedResolvingUserStatus : 1; unsigned char hasDateEndedResolvingUserStatus : 1; unsigned char hasExperiment : 1; unsigned char hasExperimentFetchError : 1; unsigned char hasDateStartedResolvingExperiment : 1; unsigned char hasDateEndedResolvingExperiment : 1; unsigned char hasOutputVoiceCountForRecognitionLanguage : 1; unsigned char hasRecognitionLanguageWithMultipleOutputVoicesExists : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setExperiment:(id)a0;
- (void)setNewUser:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setEnablementFlow:(long long)a0;
- (void)setUserStatusFetchError:(id)a0;
- (void)setDateStartedResolvingUserStatus:(id)a0;
- (void)setDateEndedResolvingUserStatus:(id)a0;
- (void)setExperimentFetchError:(id)a0;
- (void)setDateStartedResolvingExperiment:(id)a0;
- (void)setDateEndedResolvingExperiment:(id)a0;
- (void)setOutputVoiceCountForRecognitionLanguage:(id)a0;
- (void)setRecognitionLanguageWithMultipleOutputVoicesExists:(BOOL)a0;

@end
