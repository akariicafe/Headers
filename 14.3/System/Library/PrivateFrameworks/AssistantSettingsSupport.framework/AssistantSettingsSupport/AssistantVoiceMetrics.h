@class NSString, NSMutableSet;

@interface AssistantVoiceMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *voiceDownloadKey;
@property (readonly) NSString *lastVoicePreviewedKey;
@property (readonly) unsigned long long voicesPreviewed;
@property (readonly) unsigned long long uniqueVoicesPreviewed;
@property (readonly) long long downloadObservationBeginTimestamp;
@property (readonly) long long downloadObservationEndTimestamp;
@property (nonatomic) BOOL sentOnce;
@property (retain) NSMutableSet *mutableUniqueVoicesPreviewed;
@property BOOL previewedSuccessfully;
@property BOOL isCellularAllowed;
@property float downloadObservationProgress;
@property BOOL downloadError;

+ (id)keyForLanguage:(id)a0 gender:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)dictionaryMetrics;
- (double)_clockFactor;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (void)sendAnalyticsEvent;
- (double)downloadObservationDuration;
- (void)endDownloadObservation;
- (void)setVoiceDownloadForLanguageCode:(id)a0 gender:(long long)a1;
- (void)setVoicePreviewedForLanguageCode:(id)a0 gender:(long long)a1;
- (void)beginDownloadObservation;

@end
