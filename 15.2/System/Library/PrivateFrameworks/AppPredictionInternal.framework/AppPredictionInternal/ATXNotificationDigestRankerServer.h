@class NSString, NSXPCListener;

@interface ATXNotificationDigestRankerServer : NSObject <ATXNotificationDigestRankerInterface, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)generateDigestForNotificationStacks:(id)a0 reply:(id /* block */)a1;
- (void)appsSortedByNotificationsReceivedInPreviousNumDays:(unsigned long long)a0 reply:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)numberOfActiveNotificationsWithCompletionHandler:(id /* block */)a0;

@end
