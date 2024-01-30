@class NSString;

@interface BCSManualPrefetchTrigger : NSObject <BCSPrefetchTrigger> {
    id /* block */ _prefetchBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)schedulePrefetchBlock:(id /* block */)a0;
- (void)triggerPrefetchForReason:(unsigned long long)a0 completion:(id /* block */)a1;

@end
