@class NSString, _RWIRelayConnectionToApplication;

@interface _RWIApplicationInfo : NSObject {
    int _hostApplicationPID;
}

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isProxy) BOOL proxy;
@property (nonatomic) _RWIRelayConnectionToApplication *connection;
@property (copy, nonatomic) NSString *debuggerConnectionIdentifier;
@property (nonatomic) unsigned long long debuggerAvailability;
@property (readonly, nonatomic) long long automationAvailability;
@property (readonly, nonatomic) BOOL hasRemoteDebugSession;
@property (readonly, nonatomic) BOOL hasUpdatedFromListing;

+ (id)identifierForPID:(int)a0;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithPID:(int)a0 bundleId:(id)a1 name:(id)a2 isProxy:(BOOL)a3 connection:(id)a4 debuggerAvailability:(unsigned long long)a5;
- (BOOL)updateFromListing:(id)a0;
- (void)setHostApplicationPID:(int)a0;

@end
