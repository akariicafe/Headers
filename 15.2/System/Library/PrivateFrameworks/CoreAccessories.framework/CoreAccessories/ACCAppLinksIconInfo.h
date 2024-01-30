@class NSXPCConnection;

@interface ACCAppLinksIconInfo : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)getIconDataForBundleID:(id)a0 forIconSize:(double)a1 withReply:(id /* block */)a2;

@end
