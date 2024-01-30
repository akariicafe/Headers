@class NSString, NSArray, NSDictionary, NSURL, AFLanguageDetectionUserContext, STSiriContext;

@interface AFDictationOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSString *applicationDisplayName;
@property (copy, nonatomic) NSString *applicationVersion;
@property (retain, nonatomic) STSiriContext *context;
@property (copy, nonatomic) NSString *fieldLabel;
@property (copy, nonatomic) NSString *fieldIdentifier;
@property (copy, nonatomic) NSString *interactionIdentifier;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (nonatomic) long long keyboardType;
@property (copy, nonatomic) NSString *prefixText;
@property (copy, nonatomic) NSString *postfixText;
@property (copy, nonatomic) NSString *selectedText;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) long long transcriptionMode;
@property (copy, nonatomic) NSArray *inlineItemList;
@property (copy, nonatomic) NSString *microphoneIdentifier;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSString *keyboardIdentifier;
@property (copy, nonatomic) NSString *languageCodeOverride;
@property (copy, nonatomic) NSString *offlineLanguage;
@property (nonatomic) long long voiceSearchTypeOptions;
@property (copy, nonatomic) NSDictionary *voiceSearchHeaderFields;
@property (copy, nonatomic) NSDictionary *voiceSearchQueryParameters;
@property (copy, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (nonatomic) BOOL forceOfflineRecognition;
@property (nonatomic) BOOL preferOnlineRecognition;
@property (nonatomic) BOOL detectUtterances;
@property (nonatomic) BOOL continuousListening;
@property (nonatomic) BOOL shouldHandleCapitalization;
@property (nonatomic) BOOL preferOnDeviceRecognition;
@property (nonatomic) BOOL secureOfflineOnly;
@property (nonatomic) BOOL farField;
@property (nonatomic) BOOL releaseAudioSessionOnRecordingCompletion;
@property (nonatomic) BOOL incremental;
@property (nonatomic) double maximumRecognitionDuration;
@property (nonatomic) long long taskHint;
@property (copy, nonatomic) NSURL *originalAudioFileURL;
@property (copy, nonatomic) NSDictionary *recognitionOverrides;
@property (copy, nonatomic) NSURL *modelOverrideURL;
@property (copy, nonatomic) AFLanguageDetectionUserContext *languageDetectionUserContext;
@property (nonatomic) long long dictationInputOrigin;
@property (copy, nonatomic) NSString *samplingInfo;

- (void)encodeWithCoder:(id)a0;
- (id)dictationOptionsWithoutTextContext;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
