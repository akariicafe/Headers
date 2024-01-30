@class NSArray;
@protocol CoreDAVAccountInfoProvider;

@interface CoreDAVRequestLogger : NSObject {
    id<CoreDAVAccountInfoProvider> _provider;
    int _snippetsLogged;
}

@property (retain, nonatomic) NSArray *headerSortDescriptors;

- (void)logCoreDAVResponseSnippet:(id)a0 withTaskIdentifier:(id)a1;
- (void)logCoreDAVResponseHeaders:(id)a0 andStatusCode:(long long)a1 withTaskIdentifier:(id)a2;
- (void)logCoreDAVResponseSnippet:(id)a0;
- (void)logCoreDAVResponseSnippet:(id)a0 withTaskIdentifier:(id)a1 isBody:(BOOL)a2;
- (id)_inflateRequestBody:(id)a0;
- (id)initWithProvider:(id)a0;
- (void).cxx_destruct;
- (void)logCoreDAVRequest:(id)a0 withTaskIdentifier:(id)a1;
- (void)finishCoreDAVResponse;

@end
