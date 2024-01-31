@protocol NSNetServiceBrowserDelegate;

@interface NSNetServiceBrowser : NSObject {
    id _netServiceBrowser;
    id _delegate;
    void *_reserved;
}

@property id<NSNetServiceBrowserDelegate> delegate;
@property BOOL includesPeerToPeer;

- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)init;
- (void)dealloc;
- (void)stop;
- (void)_dispatchCallBack:(void *)a0 flags:(unsigned long long)a1 error:(struct { long long x0; int x1; })a2;
- (struct __CFNetServiceBrowser { } *)_internalNetServiceBrowser;
- (void)_setIncludesAWDL:(BOOL)a0;
- (void)searchForAllDomains;
- (void)searchForBrowsableDomains;
- (void)searchForRegistrationDomains;
- (void)searchForServicesOfType:(id)a0 inDomain:(id)a1;

@end
