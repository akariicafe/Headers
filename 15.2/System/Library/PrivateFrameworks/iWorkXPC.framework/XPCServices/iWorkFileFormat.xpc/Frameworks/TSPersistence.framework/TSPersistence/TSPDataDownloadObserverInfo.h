@interface TSPDataDownloadObserverInfo : TSPDataObserverInfo

- (BOOL)shouldNotifyStatus:(long long)a0;
- (BOOL)shouldClearObserverForStatus:(long long)a0;
- (id)initWithDownloadObserver:(id)a0 data:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;

@end
