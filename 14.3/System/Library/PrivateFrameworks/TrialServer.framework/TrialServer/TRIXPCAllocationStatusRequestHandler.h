@class TRIServerContext;
@protocol TRIAllocationStatusEntitled;

@interface TRIXPCAllocationStatusRequestHandler : NSObject <TRIXPCAllocationStatusServiceProtocol> {
    TRIServerContext *_serverContext;
    id<TRIAllocationStatusEntitled> _entitlementWitness;
}

- (void).cxx_destruct;
- (void)experimentRecordsWithDeploymentEnvironments:(id)a0 completion:(id /* block */)a1;
- (void)experimentHistoryRecordsWithLimit:(unsigned long long)a0 newerThanDate:(id)a1 deploymentEnvironment:(int)a2 completion:(id /* block */)a3;
- (id)initWithServerContext:(id)a0 entitlementWitness:(id)a1;

@end
