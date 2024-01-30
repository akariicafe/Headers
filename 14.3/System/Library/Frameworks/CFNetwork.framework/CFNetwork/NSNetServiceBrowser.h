@protocol NSNetServiceBrowserDelegate;

@interface NSNetServiceBrowser : NSObject {
    id _netServiceBrowser;
    id _delegate;
    void *_reserved;
}

@property id<NSNetServiceBrowserDelegate> delegate;
@property BOOL includesPeerToPeer;

- (id)init;
- (void)dealloc;
- (void)searchForRegistrationDomains;
- (void)stop;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)_dispatchCallBack:(void *)a0 flags:(unsigned long long)a1 error:(struct { long long x0; int x1; })a2;
- (void)_setIncludesAWDL:(BOOL)a0;
- (struct __CFNetServiceBrowser { } *)_internalNetServiceBrowser;
- (void)searchForServicesOfType:(id)a0 inDomain:(id)a1;
- (void)searchForBrowsableDomains;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)searchForAllDomains;

@end
