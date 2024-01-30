@class NSSet, NSXPCConnection;

@interface CRCarPlayAppBlacklist : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSSet *blacklistedBundleIDs;

- (void)_setupConnection;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)_blacklistPreference;
- (void)_requestBlacklistUpdate;
- (BOOL)containsBundleIdentifier:(id)a0;

@end
