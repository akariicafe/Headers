@class NSString;

@interface _LTSpeakRequest : _LTTranslationRequest

@property (retain, nonatomic) NSString *text;
@property (nonatomic) double ttsPlaybackRate;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ ttsProgressHandler;

- (id)requestContext;
- (void).cxx_destruct;
- (id)initWithLocalePair:(id)a0;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (void)ttsProgressed:(id)a0;

@end
