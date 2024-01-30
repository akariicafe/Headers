@interface TSPDataDownloadObserverInfo : TSPDataObserverInfo

- (id)initWithDownloadObserver:(id)a0 data:(id)a1 options:(unsigned long long)a2 isInternalObserver:(BOOL)a3 completionHandler:(id /* block */)a4;
- (BOOL)shouldNotifyStatus:(long long)a0;
- (BOOL)shouldClearObserverForStatus:(long long)a0;

@end
