@class NSString;

@interface NLTaggerAssetRequest : NSObject {
    NSString *_language;
    NSString *_tagScheme;
    id /* block */ _completionHandler;
}

+ (void)checkAssetRequests;

- (BOOL)isFulfilled;
- (void)completeWithResult:(long long)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0 tagScheme:(id)a1 completionHandler:(id /* block */)a2;
- (void)waitForFulfillment;

@end
