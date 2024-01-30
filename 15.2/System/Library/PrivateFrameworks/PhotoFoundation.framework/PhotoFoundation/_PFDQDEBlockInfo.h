@class _PFDQDECallSite;

@interface _PFDQDEBlockInfo : PFDispatchQueueStatisticsBlockInfo

@property (readonly) _PFDQDECallSite *callSite;

- (void).cxx_destruct;
- (id)init;
- (id)backtraceWithPrefix:(id)a0;

@end
