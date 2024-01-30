@class NSSet, NSXPCConnection;

@interface CRCarPlayAppDenylist : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSSet *denylistedBundleIDs;

- (void)_setupConnection;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_denylistPreference;
- (void)_requestDenylistUpdate;
- (BOOL)containsBundleIdentifier:(id)a0;

@end
