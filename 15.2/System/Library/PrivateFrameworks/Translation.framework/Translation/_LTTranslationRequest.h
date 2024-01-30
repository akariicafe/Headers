@class NSString, _LTLocalePair, NSURL;

@interface _LTTranslationRequest : NSObject <_LTSpeechTranslationDelegate>

@property (readonly, nonatomic) NSString *loggingType;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *sessionID;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestContext;
- (void).cxx_destruct;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;
- (void)_translationFailedWithError:(id)a0;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (id)initWithLocalePair:(id)a0;
- (id)serviceDelegate;

@end
