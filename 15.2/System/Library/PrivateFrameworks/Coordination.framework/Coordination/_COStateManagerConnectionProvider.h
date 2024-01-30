@class NSString, NSXPCConnection;

@interface _COStateManagerConnectionProvider : NSObject <COStateManagerConnectionProvider>

@property (readonly, nonatomic) NSXPCConnection *stateManagerServiceConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
