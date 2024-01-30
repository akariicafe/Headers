@class NSSet, NSString, AFVoiceInfo;

@interface AssistantVoiceViewModel : NSObject

@property (nonatomic) BOOL spinningOnLanguage;
@property (copy, nonatomic) NSSet *languageOptions;
@property (copy, nonatomic) NSString *selectedLanguage;
@property (copy, nonatomic) NSString *languageGroupFooterText;
@property (nonatomic) BOOL shouldShowGenderGroup;
@property (nonatomic) long long genderToSpin;
@property (nonatomic) long long genderToCheckmark;
@property (copy, nonatomic) NSString *genderGroupFooterText;
@property (retain, nonatomic) AFVoiceInfo *inProgressVoice;
@property (retain, nonatomic) AFVoiceInfo *currentVoice;

- (void).cxx_destruct;

@end
