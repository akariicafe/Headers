@interface ADClient : NSObject

+ (id)sharedClient;

- (void)requestAttributionDetailsWithBlock:(id /* block */)a0;
- (void)addClientToSegments:(id)a0 replaceExisting:(BOOL)a1;
- (void)determineAppInstallationAttributionWithCompletionHandler:(id /* block */)a0;
- (void)lookupAdConversionDetails:(id /* block */)a0;
- (void)segmentDataForSignedInUserWithBlock:(id /* block */)a0;

@end
