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

- (id)initWithConnection:(id)a0;
- (id)description;
- (void)populateBundleIdentifierForConnection:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)addConnection:(id)a0;
- (id)redactedDescription;
- (unsigned long long)hash;
- (BOOL)isEqualToProcess:(id)a0;
- (id)debugDescription;

@end
