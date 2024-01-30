@class NSString;
@protocol WBSSafariBookmarksSyncAgentProtocol;

@interface CloudBookmarksAccountsNotifier : NSObject <ACDAccountNotificationPlugin> {
    id<WBSSafariBookmarksSyncAgentProtocol> _syncAgent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;

@end
