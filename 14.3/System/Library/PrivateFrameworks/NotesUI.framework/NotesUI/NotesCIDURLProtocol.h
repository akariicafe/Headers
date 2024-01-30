@interface NotesCIDURLProtocol : NSURLProtocol

+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)canInitWithRequest:(id)a0;
+ (void)registerDataProvider:(id)a0 forCIDURL:(id)a1;
+ (void)unregisterDataProviderForCIDURL:(id)a0;

- (void)startLoading;
- (void)stopLoading;

@end
