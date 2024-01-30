@class TSPData;

@interface TSPDataObserverInfo : NSObject {
    id _observer;
    TSPData *_data;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldNotifyStatus:(long long)a0;
- (BOOL)shouldClearObserverForStatus:(long long)a0;
- (id)initWithObserver:(id)a0 data:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)notifyWithStatus:(long long)a0 info:(id)a1;

@end
