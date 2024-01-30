@class NSString;

@interface _LTSpeakRequest : _LTTranslationRequest

@property (retain, nonatomic) NSString *text;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)requestContext;
- (void).cxx_destruct;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;

@end
