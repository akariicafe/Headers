@class NSSet, NSXPCConnection;

@interface CRCarPlayAppBlacklist : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSSet *blacklistedBundleIDs;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)containsBundleIdentifier:(id)a0;
- (id)_blacklistPreference;
- (void)_requestBlacklistUpdate;
- (void)_setupConnection;

@end
