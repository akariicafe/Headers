@class NSString, NSXPCConnection;

@interface _HFAlarmConnectionProvider : NSObject <COAlarmManagerConnectionProvider>

@property (readonly, nonatomic) NSXPCConnection *alarmManagerServiceConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
