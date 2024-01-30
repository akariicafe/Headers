@class NSString, NSXPCConnection;

@interface _COCapabilityManagerConnectionProvider : NSObject <COCapabilityManagerConnectionProvider>

@property (readonly, nonatomic) NSXPCConnection *capabilityManagerServiceConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
