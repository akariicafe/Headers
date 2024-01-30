@class TSPData;

@interface TSPDataObserverInfo : NSObject {
    id _observer;
    TSPData *_data;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) BOOL isInternalObserver;

- (id)init;
- (void).cxx_destruct;
- (void)notifyWithStatus:(long long)a0 info:(id)a1;
- (BOOL)shouldNotifyStatus:(long long)a0;
- (BOOL)shouldClearObserverForStatus:(long long)a0;
- (id)initWithObserver:(id)a0 data:(id)a1 options:(unsigned long long)a2 isInternalObserver:(BOOL)a3 completionHandler:(id /* block */)a4;

@end
