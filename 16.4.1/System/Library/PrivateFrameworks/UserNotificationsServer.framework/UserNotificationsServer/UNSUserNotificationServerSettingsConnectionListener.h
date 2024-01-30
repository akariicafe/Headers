@class NSXPCListener, NSString, NSMutableArray, UNSNotificationSettingsService;

@interface UNSUserNotificationServerSettingsConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationSettingsServerProtocol, UNSNotificationSettingsServiceObserver> {
    NSMutableArray *_connections;
    NSXPCListener *_listener;
    UNSNotificationSettingsService *_settingsService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetScheduledDeliverySetting;
- (void)setNotificationSystemSettings:(id)a0;
- (void)authorizationWithOptions:(unsigned long long)a0 forNotificationSourceIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_handleClientConnectionInterrupted:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_handleClientConnectionInvalidated:(id)a0;
- (void)getAllNotificationSourcesWithCompletionHandler:(id /* block */)a0;
- (void)settingsService:(id)a0 didUpdateNotificationSourcesForBundleIdentifiers:(id)a1;
- (void)replaceNotificationSettings:(id)a0 forNotificationSourceIdentifier:(id)a1;
- (void)getNotificationSystemSettingsWithCompletionHandler:(id /* block */)a0;
- (void)settingsService:(id)a0 didUpdateNotificationSystemSettings:(id)a1;
- (void)replaceNotificationTopicSettings:(id)a0 forNotificationSourceIdentifier:(id)a1 topicIdentifier:(id)a2;
- (id)_currentConnection;
- (void)dealloc;
- (void)getNotificationSource:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithNotificationSettingsService:(id)a0;
- (void)getNotificationSources:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)resume;

@end
