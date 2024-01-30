@class NSXPCConnection;

@interface ACCAppLinksIconInfo : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (id)_init;
- (id)init;
- (void).cxx_destruct;
- (void)getIconDataForBundleID:(id)a0 forIconSize:(double)a1 withReply:(id /* block */)a2;

@end
