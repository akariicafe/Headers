@class NSString, NSXPCConnection;

@interface ATXLockScreenNotificationRankerClient : NSObject <ATXLockScreenNotificationRankerProtocol> {
    NSXPCConnection *_xpcConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rankNotificationArrays:(id)a0 reply:(id /* block */)a1;
- (void)rankNewNotificationIntoNotificationArrays:(id)a0 newNotification:(id)a1 notificationArrayIndex:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
