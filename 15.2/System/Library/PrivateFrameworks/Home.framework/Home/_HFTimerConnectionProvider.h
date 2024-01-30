@class NSString, NSXPCConnection;

@interface _HFTimerConnectionProvider : NSObject <COTimerManagerConnectionProvider>

@property (readonly, nonatomic) NSXPCConnection *timerManagerServiceConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
