@class NSString, NSXPCListener, ASCredentialSharingGroupsNotificationManager;

@interface _ASAgentCredentialSharingGroupsListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    ASCredentialSharingGroupsNotificationManager *_notificationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
