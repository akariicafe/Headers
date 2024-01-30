@interface HMDHAPAccessoryRemoteReadTask : HMDHAPAccessoryRemoteOperationTask

- (BOOL)_appendServiceListWithRequest:(id)a0 serviceList:(id)a1;
- (id)initWithContext:(id)a0 requests:(id)a1 completion:(id /* block */)a2;
- (id)initWithContext:(id)a0 requests:(id)a1 delegateDevice:(id)a2 completion:(id /* block */)a3;

@end
