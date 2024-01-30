@class NSString, NSXPCConnection;

@interface STWebHistory : NSObject

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) NSXPCConnection *xpcConnection;

- (id)initWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)deleteAllHistory;
- (void)deleteHistoryForURL:(id)a0;
- (void)deleteHistoryDuringInterval:(id)a0;

@end
