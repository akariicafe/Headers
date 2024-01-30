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
@property (readonly, nonatomic) unsigned int tokenCount;
@property (nonatomic) unsigned long long useCount;

+ (BOOL)removeActiveAssertionFromNetworkAgent:(id)a0;
+ (int)newRegistrationFileDescriptor;
+ (BOOL)addActiveAssertionToNetworkAgent:(id)a0;
+ (BOOL)useNetworkAgent:(id)a0 returnUseCount:(unsigned long long *)a1;

- (BOOL)resetError;
- (BOOL)setLowWaterMark:(unsigned int)a0;
- (int)dupRegistrationFileDescriptor;
- (BOOL)unregisterNetworkAgent;
- (void)handleMessageFromAgent;
- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (BOOL)setRegisteredNetworkAgent:(id)a0 fileDescriptor:(int)a1;
- (BOOL)registerNetworkAgent:(id)a0 withFileDescriptor:(int)a1;
- (id)description;
- (BOOL)assignNexusData:(id)a0 toClient:(id)a1;
- (BOOL)flushTokens;
- (BOOL)assignResolvedEndpoints:(id)a0 toClient:(id)a1;
- (void).cxx_destruct;
- (BOOL)removeNetworkAgentFromInterfaceNamed:(id)a0;
- (BOOL)createReadSourceWithRegistrationSocket:(int)a0;
- (id)initWithNetworkAgentClass:(Class)a0;
- (BOOL)registerNetworkAgent:(id)a0;
- (BOOL)assignDiscoveredEndpoints:(id)a0 toClient:(id)a1;
- (BOOL)updateNetworkAgent:(id)a0;
- (void)dealloc;
- (BOOL)addNetworkAgentToInterfaceNamed:(id)a0;
- (id)initWithNetworkAgentClass:(Class)a0 queue:(id)a1;
- (BOOL)addToken:(id)a0;

@end
