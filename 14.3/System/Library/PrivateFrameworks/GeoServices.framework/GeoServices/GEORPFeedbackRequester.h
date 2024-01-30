@interface GEORPFeedbackRequester : GEOServiceRequester

+ (id)sharedInstance;

- (void)cancelRequest:(id)a0;
- (void)startWithRequest:(id)a0 traits:(id)a1 completionHandler:(id /* block */)a2;
- (id)_validateResponse:(id)a0;
- (id)_requestConfigForRequest:(id)a0;

@end
