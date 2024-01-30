@interface TSPDataDownloadObserverInfo : TSPDataObserverInfo

- (id)initWithDownloadObserver:(id)a0 data:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (BOOL)shouldClearObserverForStatus:(long long)a0;
- (BOOL)shouldNotifyStatus:(long long)a0;

@end
