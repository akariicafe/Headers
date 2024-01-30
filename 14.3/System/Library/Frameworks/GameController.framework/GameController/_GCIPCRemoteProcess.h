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

- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (BOOL)isEqualToProcess:(id)a0;
- (void)addConnection:(id)a0;
- (unsigned long long)hash;
- (id)initWithConnection:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;

@end
