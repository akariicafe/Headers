@class NSString, NSXPCConnection;

@interface STWebHistory : NSObject

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) NSXPCConnection *xpcConnection;

- (id)init;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 error:(id *)a1;
- (void)deleteAllHistory;
- (void)deleteHistoryDuringInterval:(id)a0;
- (void)deleteHistoryForURL:(id)a0;

@end
