@class NSUUID, NSData, NSDate, NPTunnelTuscanyEndpoint, NWNetworkAgentRegistration, NPWaldo, NSURLSession, NSString, NSDictionary, NSPKeyNetworkAgent, NWEndpoint;

@interface NPTuscanyOnRamp : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL isDayPassExpired;
@property (readonly) NWEndpoint *daypassEndpoint;
@property (retain) NPTunnelTuscanyEndpoint *tuscanyEndpoint;
@property (retain) NSDate *retryDate;
@property (retain) NSUUID *dayPassUUID;
@property (retain) NSData *dayPass;
@property (retain) NSDate *dayPassCreationDate;
@property unsigned int dayPassSessionCounter;
@property double dayPassHardExpiry;
@property (retain) NWNetworkAgentRegistration *agentRegistration;
@property (retain) NSPKeyNetworkAgent *agent;
@property (weak) NPWaldo *parentWaldo;
@property BOOL dayPassFailed;
@property (retain) NSURLSession *dayPassSession;
@property (readonly) BOOL dayPassRefreshAllowed;
@property BOOL dayPassPending;
@property long long TFOStatus;
@property (readonly) unsigned long long maxFrameSize;
@property (readonly) unsigned long long rtt;
@property (readonly) NSString *shortDescription;
@property (readonly) long long currentEdgeType;
@property int error;
@property (readonly) BOOL isTFOEnabled;
@property (readonly) NSDictionary *descriptionDictionary;

- (id)initWithKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)unregisterAgent;
- (BOOL)fillTestDaypass;
- (unsigned int)copyValue:(void *)a0 ofSize:(unsigned int)a1 fromOffset:(unsigned int)a2 base:(const char *)a3 totalLength:(unsigned int)a4;
- (unsigned int)getNextSessionCounter;
- (id)getTuscanyEndpoint:(id)a0;
- (void)invalidateDayPass;
- (BOOL)isDayPassPastExpiry:(double)a0;
- (void)refreshDayPassWithWaldoDelegate:(id)a0 softExpiry:(double)a1 retryInterval:(double)a2 edge:(id)a3 completionHandler:(id /* block */)a4;
- (BOOL)registerAgentWithKey:(id)a0;
- (void)resetParentWaldo:(id)a0;
- (void)updateSessionCounterFromKernel;

@end
