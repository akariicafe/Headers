@class NSUUID, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, NWNetworkAgent;

@interface NWNetworkAgentRegistration : NSObject

@property Class networkAgentClass;
@property (retain) NSObject<NWNetworkAgent> *networkAgent;
@property (retain) NSUUID *registeredUUID;
@property int registrationSocket;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_source> *readSource;
@property (readonly, nonatomic, getter=isRegistered) BOOL registered;
@property (nonatomic) unsigned long long useCount;

+ (BOOL)useNetworkAgent:(id)a0 returnUseCount:(unsigned long long *)a1;
+ (int)newRegistrationFileDescriptor;
+ (BOOL)addActiveAssertionToNetworkAgent:(id)a0;
+ (BOOL)removeActiveAssertionFromNetworkAgent:(id)a0;

- (BOOL)assignDiscoveredEndpoints:(id)a0 toClient:(id)a1;
- (id)initWithNetworkAgentClass:(Class)a0 queue:(id)a1;
- (void)handleMessageFromAgent;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (void)dealloc;
- (BOOL)registerNetworkAgent:(id)a0 withFileDescriptor:(int)a1;
- (BOOL)addNetworkAgentToInterfaceNamed:(id)a0;
- (BOOL)assignResolvedEndpoints:(id)a0 toClient:(id)a1;
- (id)description;
- (BOOL)createReadSourceWithRegistrationSocket:(int)a0;
- (BOOL)setRegisteredNetworkAgent:(id)a0 fileDescriptor:(int)a1;
- (id)initWithNetworkAgentClass:(Class)a0;
- (BOOL)registerNetworkAgent:(id)a0;
- (int)dupRegistrationFileDescriptor;
- (BOOL)unregisterNetworkAgent;
- (BOOL)assignNexusData:(id)a0 toClient:(id)a1;
- (BOOL)updateNetworkAgent:(id)a0;
- (BOOL)removeNetworkAgentFromInterfaceNamed:(id)a0;

@end
