@protocol NSNetServiceBrowserDelegate;

@interface NSNetServiceBrowser : NSObject {
    id _netServiceBrowser;
    id _delegate;
    void *_reserved;
}

@property id<NSNetServiceBrowserDelegate> delegate;
@property BOOL includesPeerToPeer;

- (void)searchForAllDomains;
- (void)searchForServicesOfType:(id)a0 inDomain:(id)a1;
- (struct __CFNetServiceBrowser { } *)_internalNetServiceBrowser;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)_setIncludesAWDL:(BOOL)a0;
- (void)searchForBrowsableDomains;
- (void)searchForRegistrationDomains;
- (id)init;
- (void)dealloc;
- (void)_dispatchCallBack:(void *)a0 flags:(unsigned long long)a1 error:(struct { long long x0; int x1; })a2;
- (void)stop;

@end
