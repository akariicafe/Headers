@class NSString, NSXPCListener;

@interface ATXAppDirectoryServer : NSObject <NSXPCListenerDelegate, ATXAppDirectoryInterface> {
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)requestNotificationWhenCategoriesAreReady;
- (void)appLaunchDatesWithReply:(id /* block */)a0;
- (void)categoriesWithReply:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)notifyBookmarksDidChange;

@end
