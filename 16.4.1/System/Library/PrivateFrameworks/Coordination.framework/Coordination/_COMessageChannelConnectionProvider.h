@class NSString, NSXPCConnection;

@interface _COMessageChannelConnectionProvider : NSObject <COMessageChannelConnectionProvider>

@property (readonly, nonatomic) NSXPCConnection *messageChannelServiceConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
