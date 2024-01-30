@class NSArray, NSMutableSet, NSString;

@interface _GCIPCRemoteProcess : NSObject <_GCIPCProcess>

@property (copy) NSArray *connections;
@property (retain, nonatomic) NSMutableSet *connectionInvalidationRegistrations;
@property (readonly) struct { unsigned int val[8]; } auditToken;
@property (readonly) int auditSessionIdentifier;
@property (readonly) int processIdentifier;
@property (readonly) unsigned int effectiveUserIdentifier;
@property (readonly) unsigned int effectiveGroupIdentifier;
@property (readonly) NSString *bundleIdentifier;

- (BOOL)isEqualToProcess:(id)a0;
- (id)redactedDescription;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithConnection:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void)addConnection:(id)a0;
- (void).cxx_destruct;
- (void)populateBundleIdentifierForConnection:(id)a0;

@end
