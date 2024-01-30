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
@property (nonatomic) double ttsPlaybackRate;
@property (nonatomic) BOOL enableVAD;
@property (copy, nonatomic) NSString *appIdentifier;
@property (nonatomic) long long sourceOrigin;
@property (copy, nonatomic) NSString *logIdentifier;
@property (copy, nonatomic) NSString *untrustedClientIdentifier;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *trustedClientIdentifier;
@property (nonatomic) long long dataSharingOptInStatus;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)redactIfNeeded:(id)a0;
- (long long)_ospreyDataSharingStatus;
- (id)_ospreySpeechTranslationRequestWithHybridEndpointer:(BOOL)a0;
- (id)_ospreyTTSRequestWithText:(id)a0;
- (id)_ospreyTextToSpeechTranslationRequestWithText:(id)a0;
- (id)_ttsVoiceStringWithLocale:(id)a0;
- (id)sanitizedCopyForUntrustedTextTranslation;
- (id)sequoiaClientHeaderValue;

@end
