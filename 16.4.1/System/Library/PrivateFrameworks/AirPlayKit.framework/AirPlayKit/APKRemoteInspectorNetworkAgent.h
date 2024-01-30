@class NSString;
@protocol APKRemoteInspectorNetworkEventDispatcherProtocol, APKRemoteInspectorNetworkAgentDelegate;

@interface APKRemoteInspectorNetworkAgent : NSObject <RWIProtocolNetworkDomainHandler>

@property (readonly, nonatomic) id<APKRemoteInspectorNetworkEventDispatcherProtocol> dispatcher;
@property (weak, nonatomic) id<APKRemoteInspectorNetworkAgentDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
