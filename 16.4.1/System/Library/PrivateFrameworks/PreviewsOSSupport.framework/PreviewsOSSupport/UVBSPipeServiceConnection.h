@class NSString;

@interface UVBSPipeServiceConnection : UVBSConnection <UVBSPipeServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activateWithInterfaceTarget:(id)a0;
- (oneway void)sendEncodedEvent:(id)a0;
- (oneway void)sendEncodedEvent:(id)a0 replyHandler:(id /* block */)a1;

@end
