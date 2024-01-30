@class NSString, NSXPCConnection;

@interface STWebHistory : NSObject

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) NSXPCConnection *xpcConnection;

- (id)initWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)init;
- (void).cxx_destruct;
- (void)deleteAllHistory;
- (id)initWithBundleIdentifier:(id)a0;
- (void)deleteHistoryForURL:(id)a0;
- (void)deleteHistoryDuringInterval:(id)a0;

@end
