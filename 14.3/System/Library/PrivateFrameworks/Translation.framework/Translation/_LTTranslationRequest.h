@class NSString, _LTLocalePair, NSURL;

@interface _LTTranslationRequest : NSObject

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

- (id)requestContext;
- (void).cxx_destruct;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (id)initWithLocalePair:(id)a0;
- (void)_translationFailedWithError:(id)a0;
- (id)initWithSourceLocale:(id)a0 targetLocale:(id)a1;

@end
