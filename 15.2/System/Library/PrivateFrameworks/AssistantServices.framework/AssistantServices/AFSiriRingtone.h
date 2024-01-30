@class NSArray, NSString, AFVoiceInfo;

@interface AFSiriRingtone : NSObject {
    BOOL _languageMismatch;
    NSString *_voiceLanguage;
}

@property (retain, nonatomic) NSArray *contacts;
@property (copy, nonatomic) NSString *displayedCallerID;
@property (nonatomic) long long callerIDType;
@property (copy, nonatomic) NSString *callServiceSpeakableName;
@property (copy, nonatomic) NSString *callDestinationID;
@property (nonatomic) long long callDestinationIDType;
@property (readonly, nonatomic) AFVoiceInfo *voiceInfo;
@property (readonly, nonatomic) NSString *textToSpeak;

- (id)_bestVoiceInfoWithCurrentLocale:(id)a0;
- (id)_spokenTextForCallerID:(id)a0 ofType:(long long)a1 rawCaller:(id)a2 rawCallerType:(long long)a3 languageCode:(id)a4;
- (id)_generateSpokenTextForContacts:(id)a0 voiceLanguage:(id)a1 displayedCallerID:(id)a2 callerIDType:(long long)a3 callDestinationID:(id)a4 callDestinationIDType:(long long)a5 callServiceSpeakableName:(id)a6;
- (id)_spokenTextForContacts:(id)a0 callServiceSpeakableName:(id)a1 languageCode:(id)a2;
- (id)_spokenTextForCallDestinationID:(id)a0 ofType:(long long)a1 callServiceSpeakableName:(id)a2 languageCode:(id)a3;
- (id)_phoneticNamesForContact:(id)a0 languageCode:(id)a1;
- (id)_spokenTextForOneContact:(id)a0 callServiceSpeakableName:(id)a1 languageCode:(id)a2;
- (id)_spokenTextForTwoContacts:(id)a0 callServiceSpeakableName:(id)a1 languageCode:(id)a2;
- (id)_spokenTextForThreeContacts:(id)a0 callServiceSpeakableName:(id)a1 languageCode:(id)a2;
- (id)_escapeCallerIDString:(id)a0 forType:(long long)a1;
- (id)_escapeCallDestinationIDString:(id)a0 forType:(long long)a1;
- (void)_phoneticInfoForContact:(id)a0 languageCode:(id)a1 firstName:(id *)a2 middleName:(id *)a3 lastName:(id *)a4 nickname:(id *)a5;
- (id)initWithContacts:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
