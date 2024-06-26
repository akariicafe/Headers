@class NSString, IOKConnection, NSMutableArray;

@interface TSgPTPNetworkPort : TSgPTPPort {
    IOKConnection *_connection;
    NSMutableArray *_clients;
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
@property (nonatomic) BOOL hasLocalFrequencyTolerance;
@property (nonatomic) unsigned int localFrequencyTolerance;
@property (nonatomic) BOOL hasRemoteFrequencyTolerance;
@property (nonatomic) unsigned int remoteFrequencyTolerance;
@property (nonatomic) BOOL hasLocalFrequencyStability;
@property (nonatomic) unsigned int localFrequencyStability;
@property (nonatomic) BOOL hasRemoteFrequencyStability;
@property (nonatomic) unsigned int remoteFrequencyStability;
@property (copy, nonatomic) NSString *sourceAddressString;
@property (copy, nonatomic) NSString *destinationAddressString;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) IOKConnection *connection;
@property (nonatomic) BOOL overridenReceiveMatching;
@property (nonatomic) unsigned long long overridenReceiveClockIdentity;
@property (nonatomic) unsigned short overridenReceivePortNumber;
@property (readonly, copy, nonatomic) NSString *interfaceName;

+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;

- (BOOL)_enabled;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void).cxx_destruct;
- (void)serviceTerminated;
- (BOOL)_commonInitWithService:(id)a0;
- (void)updateProperties;
- (unsigned long long)_remoteClockIdentity;
- (unsigned short)_remotePortNumber;
- (BOOL)_remoteIsSameDevice;
- (BOOL)_isASCapable;
- (unsigned int)_propagationDelay;
- (unsigned int)_maximumPropagationDelay;
- (unsigned int)_minimumPropagationDelay;
- (unsigned int)_propagationDelayLimit;
- (unsigned int)_maximumRawDelay;
- (unsigned int)_minimumRawDelay;
- (char)_localSyncLogMeanInterval;
- (char)_remoteSyncLogMeanInterval;
- (char)_localAnnounceLogMeanInterval;
- (char)_remoteAnnounceLogMeanInterval;
- (unsigned char)_localLinkType;
- (unsigned char)_remoteLinkType;
- (unsigned char)_localTimestampingMode;
- (unsigned char)_remoteTimestampingMode;
- (BOOL)_hasLocalFrequencyTolerance;
- (unsigned int)_localFrequencyTolerance;
- (BOOL)_hasRemoteFrequencyTolerance;
- (unsigned int)_remoteFrequencyTolerance;
- (BOOL)_hasLocalFrequencyStability;
- (unsigned int)_localFrequencyStability;
- (BOOL)_hasRemoteFrequencyStability;
- (unsigned int)_remoteFrequencyStability;
- (id)_sourceAddressString;
- (id)_destinationAddressString;
- (BOOL)_overridenReceiveMatching;
- (unsigned long long)_overridenReceiveClockIdentity;
- (unsigned short)_overridenReceivePortNumber;
- (BOOL)requestRemoteMessageIntervalsWithPDelayMessageInterval:(char)a0 syncMessageInterval:(char)a1 announceMessageInterval:(char)a2 error:(id *)a3;
- (BOOL)overrideReceiveMatchingWithRemoteClockIdentity:(unsigned long long)a0 remotePortNumber:(unsigned short)a1 error:(id *)a2;
- (BOOL)restoreReceiveMatchingError:(id *)a0;
- (BOOL)enablePortError:(id *)a0;
- (BOOL)disablePortError:(id *)a0;
- (BOOL)getCurrentPortInfo:(struct { int x0; int x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned long long x6; unsigned short x7; } *)a0 error:(id *)a1;
- (void)_handleNotification:(int)a0 withArg1:(unsigned long long)a1 arg2:(unsigned long long)a2 arg3:(unsigned long long)a3 arg4:(unsigned long long)a4 arg5:(unsigned long long)a5 arg6:(unsigned long long)a6;
- (BOOL)registerAsyncCallbackError:(id *)a0;
- (BOOL)deregisterAsyncCallbackError:(id *)a0;

@end
