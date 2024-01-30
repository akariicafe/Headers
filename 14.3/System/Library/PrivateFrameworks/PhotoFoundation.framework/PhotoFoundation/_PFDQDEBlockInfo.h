@class _PFDQDECallSite;

@interface _PFDQDEBlockInfo : PFDispatchQueueStatisticsBlockInfo

@property (readonly) _PFDQDECallSite *callSite;

- (id)init;
- (void).cxx_destruct;
- (id)backtraceWithPrefix:(id)a0;

@end
