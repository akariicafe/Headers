@class NSUUID, NSString, NSURL, _LTLocalePair;

@interface _LTTranslationRequest : NSObject <_LTSpeechTranslationDelegate>

@property (copy, nonatomic) NSUUID *batchSessionUUID;
@property (readonly, nonatomic) NSString *loggingType;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *sessionID;
@property (readonly, copy, nonatomic) NSString *qssSessionID;
@property (nonatomic) long long taskHint;
@property (readonly, nonatomic) _LTLocalePair *localePair;
@property (retain, nonatomic) NSURL *outputFileURL;
@property (nonatomic) BOOL censorSpeech;
@property (nonatomic) BOOL forcedOfflineTranslation;
@property (nonatomic) BOOL _forcedOnlineTranslation;
@property (retain, nonatomic) NSURL *_offlineMTModelURL;
@property (nonatomic) long long _mtConfidenceThreshold;
@property (nonatomic) BOOL autodetectLanguage;
@property (copy, nonatomic) NSString *appIdentifier;
@property (nonatomic) long long sourceOrigin;
@property (nonatomic) unsigned int audioSessionID;
@property (copy, nonatomic) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestContext;
- (void).cxx_destruct;
- (id)serviceDelegate;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;
- (id)initWithLocalePair:(id)a0;
- (BOOL)_canUseTextService;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (void)_startTranslationWithTextService:(id)a0 done:(id /* block */)a1;
- (void)_translationFailedWithError:(id)a0;
- (id)initWithLocalePair:(id)a0 suggestedUniqueID:(id)a1;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1 suggestedUniqueID:(id)a2;

@end
