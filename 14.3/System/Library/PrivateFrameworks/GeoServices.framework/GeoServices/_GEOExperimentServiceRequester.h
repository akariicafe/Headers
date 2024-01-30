@interface _GEOExperimentServiceRequester : GEOServiceRequester

+ (id)sharedInstance;

- (void)cancelRequest:(id)a0;
- (void)startWithRequest:(id)a0 traits:(id)a1 completionHandler:(id /* block */)a2;

@end
