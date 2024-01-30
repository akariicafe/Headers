@class NSString, DTXConnection;

@interface DTInstrumentServer : NSObject <DTInstrumentServerAllowedRPC, DTInstrumentServerSimulatorPrivilege>

@property (readonly, nonatomic) DTXConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAppleInternal;
+ (void)_taskInvalid:(unsigned int)a0 forPid:(int)a1;
+ (void)_tfpPortReceived:(unsigned int)a0;
+ (void)takeOwnershipOfSharedAuthorization:(void *)a0;
+ (unsigned int)taskForPid:(int)a0;

- (void)cancel;
- (id)initWithTransport:(id)a0;
- (void).cxx_destruct;
- (void)resume;
- (void)_notifyOfTFPCommunicationsPort:(unsigned int)a0;
- (id)_blessSimulatorHub:(int)a0;
- (void)loadServicesAtPath:(id)a0;
- (void)setMaxConnectionEnqueue:(unsigned long long)a0;

@end
