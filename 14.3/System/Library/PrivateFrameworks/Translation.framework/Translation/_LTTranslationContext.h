@class NSString, NSArray, NSURL, _LTLocalePair;

@interface _LTTranslationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) long long taskHint;
@property (copy, nonatomic) _LTLocalePair *localePair;
@property (nonatomic) BOOL autodetectLanguage;
@property (nonatomic) BOOL censorSpeech;
@property (copy, nonatomic) NSURL *outputFileURL;
@property (copy, nonatomic) NSArray *asrModelURLs;
@property (copy, nonatomic) NSURL *mtModelURL;
@property (copy, nonatomic) NSURL *sourceURL;
@property (nonatomic) BOOL autoEndpoint;
@property (nonatomic) long long lidThreshold;
@property (nonatomic) long long route;
@property (nonatomic) unsigned int audioSessionID;
@property (nonatomic) long long asrConfidenceThreshold;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) long long dataSharingOptInStatus;

- (id)init;
- (void).cxx_destruct;
- (id)_ospreySpeechTranslationRequestWithHybridEndpointer:(BOOL)a0;
- (id)_ospreyTextToSpeechTranslationRequestWithText:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)_ospreyDataSharingStatus;
- (id)_ttsVoiceStringWithLocale:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_ospreyTTSRequestWithText:(id)a0;

@end
