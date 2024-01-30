@class NSString, NSXPCConnection;

@interface ATXNotificationDigestRankerClient : NSObject <ATXNotificationDigestRankerInterface> {
    NSXPCConnection *_xpcConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)generateDigestForNotificationStacks:(id)a0 reply:(id /* block */)a1;
- (void)appsSortedByNotificationsReceivedInPreviousNumDays:(unsigned long long)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;

@end
