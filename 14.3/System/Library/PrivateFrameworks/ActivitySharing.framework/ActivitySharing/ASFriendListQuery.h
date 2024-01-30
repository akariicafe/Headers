@class NSString;

@interface ASFriendListQuery : HKQuery <ASFriendListQueryClientInterface> {
    id /* block */ _updateHandler;
    int _mostRecentToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsTaskServers;
+ (id)clientInterfaceProtocol;

- (void)queue_validate;
- (void)queue_queryDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_deliverError:(id)a0;
- (id)initWithUpdateHandler:(id /* block */)a0;
- (void)client_deliverFriendList:(id)a0 queryUUID:(id)a1;

@end
