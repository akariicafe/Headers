@class NSString, TSgPTPNetworkPort, NSPointerArray;

@interface TSXgPTPNetworkPort : TSXgPTPPort <TSXgPTPNetworkPortClient> {
    NSPointerArray *_clients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
    BOOL _clientAddedToDaemon;
}

@property (nonatomic) unsigned long long remoteClockIdentity;
@property (nonatomic) unsigned short remotePortNumber;
@property (nonatomic) BOOL remoteIsSameDevice;
@property (nonatomic, getter=isASCapable) BOOL asCapable;
@property (nonatomic) unsigned int propagationDelay;
@property (nonatomic) unsigned int maximumPropagationDelay;
@property (nonatomic) unsigned int minimumPropagationDelay;
@property (nonatomic) unsigned int propagationDelayLimit;
@property (nonatomic) unsigned int maximumRawDelay;
@property (nonatomic) unsigned int minimumRawDelay;
@property (nonatomic) char localSyncLogMeanInterval;
@property (nonatomic) char remoteSyncLogMeanInterval;
@property (nonatomic) char localAnnounceLogMeanInterval;
@property (nonatomic) char remoteAnnounceLogMeanInterval;
@property (nonatomic) unsigned char localLinkType;
@property (nonatomic) unsigned char remoteLinkType;
@property (nonatomic) unsigned char localTimestampingMode;
@property (nonatomic) unsigned char remoteTimestampingMode;
@property (nonatomic) unsigned char localOscillatorType;
@property (nonatomic) unsigned char remoteOscillatorType;
@property (nonatomic) BOOL hasLocalFrequencyToleranceLower;
@property (nonatomic) int localFrequencyToleranceLower;
@property (nonatomic) BOOL hasLocalFrequencyToleranceUpper;
@property (nonatomic) int localFrequencyToleranceUpper;
@property (nonatomic) BOOL hasRemoteFrequencyToleranceLower;
@property (nonatomic) int remoteFrequencyToleranceLower;
@property (nonatomic) BOOL hasRemoteFrequencyToleranceUpper;
@property (nonatomic) int remoteFrequencyToleranceUpper;
@property (nonatomic) BOOL hasLocalFrequencyStabilityLower;
@property (nonatomic) int localFrequencyStabilityLower;
@property (nonatomic) BOOL hasLocalFrequencyStabilityUpper;
@property (nonatomic) int localFrequencyStabilityUpper;
@property (nonatomic) BOOL hasRemoteFrequencyStabilityLower;
@property (nonatomic) int remoteFrequencyStabilityLower;
@property (nonatomic) BOOL hasRemoteFrequencyStabilityUpper;
@property (nonatomic) int remoteFrequencyStabilityUpper;
@property (copy, nonatomic) NSString *sourceAddressString;
@property (copy, nonatomic) NSString *destinationAddressString;
@property (nonatomic) BOOL overridenReceiveMatching;
@property (nonatomic) unsigned long long overridenReceiveClockIdentity;
@property (nonatomic) unsigned short overridenReceivePortNumber;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *interfaceName;
@property (weak, nonatomic) TSgPTPNetworkPort *owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverProtocol;
+ (id)clientProtocol;

- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)interruptedConnection;
- (id)initWithEndpoint:(id)a0;
- (void)invalidatedConnection;
- (id)exportedObject;
- (void).cxx_destruct;
- (void)announceTimeout;
- (void)_updateFromProperties:(id)a0;
- (void)changedASCapable:(BOOL)a0;
- (void)changedAdministrativeEnable:(BOOL)a0;
- (BOOL)deregisterAsyncCallbackError:(id *)a0;
- (BOOL)disablePortError:(id *)a0;
- (BOOL)enablePortError:(id *)a0;
- (BOOL)getCurrentPortInfo:(struct { int x0; int x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned long long x6; unsigned short x7; } *)a0 error:(id *)a1;
- (BOOL)overrideReceiveMatchingWithRemoteClockIdentity:(unsigned long long)a0 remotePortNumber:(unsigned short)a1 error:(id *)a2;
- (BOOL)registerAsyncCallbackError:(id *)a0;
- (BOOL)requestRemoteMessageIntervalsWithPDelayMessageInterval:(char)a0 syncMessageInterval:(char)a1 announceMessageInterval:(char)a2 error:(id *)a3;
- (BOOL)restoreReceiveMatchingError:(id *)a0;
- (void)syncTimeoutWithMean:(long long)a0 median:(long long)a1 standardDeviation:(unsigned long long)a2 minimum:(long long)a3 maximum:(long long)a4 numberOfSamples:(unsigned int)a5;
- (void)terminatedService;
- (void)timedoutMACLookup;

@end
