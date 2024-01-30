@class NSString;

@interface BCSManualPrefetchTrigger : NSObject <BCSPrefetchTrigger>

@property (copy, nonatomic) id /* block */ prefetchBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)schedulePrefetchBlock:(id /* block */)a0;
- (void)triggerPrefetchWithCompletion:(id /* block */)a0;

@end
