@class NSString;

@interface SLDCollaborationNoticeService : NSObject <SLDService, SLDCollaborationNoticeServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteObjectProtocol;
+ (id)sharedService;

- (void)sendClearNoticesFor:(id)a0 forAttributionIdentifiers:(id)a1 reply:(id /* block */)a2;
- (void)sendHighlightEventData:(id)a0 eventType:(long long)a1 forAttributionIdentifiers:(id)a2 reply:(id /* block */)a3;
- (id)_applicationIdentifierForConnection:(id)a0;
- (BOOL)_connShouldUnrestrictHighlightLookup:(id)a0;
- (id)_handlesForAttributionIdentifiers:(id)a0 appID:(id)a1;
- (void)_send:(id)a0 forAttributionIdentifiers:(id)a1 reply:(id /* block */)a2;
- (void)_sendClearNoticesTransmission:(id)a0 forAttributionIdentifiers:(id)a1 reply:(id /* block */)a2;

@end
