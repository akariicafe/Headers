@class NSString, HMDDevice;

@interface HMDHAPAccessoryRemoteOperationTask : HMDHAPAccessoryTask

@property (readonly) NSString *remoteMessageName;
@property (readonly) HMDDevice *delegateDevice;

- (void)execute;
- (void).cxx_destruct;
- (id)activityRequestEventName;
- (id)initWithContext:(id)a0 remoteMessageName:(id)a1 requests:(id)a2 delegateDevice:(id)a3 completion:(id /* block */)a4;
- (id)_remoteMessageFromAccessoryRequestMap:(id)a0;
- (BOOL)_buildMessageAccessoryListFromAccessoryRequestMap:(id)a0 accessoryList:(id)a1;
- (BOOL)_buildMessageAccessoryListFromRequests:(id)a0 accessoryList:(id)a1;
- (BOOL)_appendServiceListWithRequest:(id)a0 serviceList:(id)a1;

@end
