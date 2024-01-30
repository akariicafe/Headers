@class NSMutableArray, NSString, TimingCollection, VCConnectionManager, NSObject;
@protocol VCConnectionProtocol, OS_dispatch_queue;

@interface VCTransportSession : NSObject {
    BOOL _isCallActive;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSString *_localFrameworkVersion;
    NSString *_remoteFrameworkVersion;
    struct opaqueRTCReporting { } *_reportingAgent;
    NSMutableArray *_streams;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateLock;
}

@property (readonly, nonatomic) int detailedErrorCode;
@property (readonly, nonatomic) BOOL isHandoverSupported;
@property (readonly, nonatomic) BOOL isRemoteOSPreLion;
@property (nonatomic) BOOL requiresWiFi;
@property (nonatomic) BOOL useCompressedConnectionData;
@property (readonly, nonatomic) unsigned int connectionSetupRTTEstimate;
@property (retain, nonatomic) NSObject *connectionSetupPiggybackBlob;
@property (retain, nonatomic) TimingCollection *perfTimings;
@property (readonly, nonatomic) VCConnectionManager *connectionManager;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (readonly, nonatomic) unsigned int basebandNotificationRegistrationToken;
@property (nonatomic, setter=setCallActive:) BOOL isCallActive;
@property (retain, nonatomic) id<VCConnectionProtocol> registeredConnection;
@property (readonly) int networkInterfaceType;
@property (readonly) unsigned int networkMTU;
@property (readonly) BOOL isIPv6;

+ (int)vtpPacketTypeForStreamType:(unsigned int)a0;
+ (unsigned int)trafficClassForStreamType:(unsigned int)a0;

- (void)start;
- (void)dealloc;
- (void)stop;
- (id)initWithNotificationQueue:(id)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1;
- (void)callEventHandlerWithEvent:(unsigned int)a0 info:(id)a1;
- (int)createVFD:(int *)a0 forStreamType:(unsigned int)a1;
- (void)setOneToOneModeEnabled:(BOOL)a0 isInitiator:(BOOL)a1;
- (BOOL)getConnectionSetupData:(id *)a0 withOptions:(id)a1 error:(id *)a2;
- (int)getSignalStrengthBars:(int *)a0 displayBars:(int *)a1 maxDisplayBars:(int *)a2;
- (int)flushBasebandQueueForConnection:(id)a0 payloadInfoList:(id)a1;
- (int)updateQualityIndicator:(int)a0 isIPv6:(BOOL)a1;
- (int)registerBasebandNotificationsForConnection:(id)a0;
- (void)deregisterBasebandNotifications;
- (void)setConnectionSelectionVersionWithLocalFrameworkVersion:(id)a0 remoteFrameworkVersion:(id)a1;
- (void)reportNetworkConditionsDegraded;
- (void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)a0;
- (void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)a0;
- (int)flushBasebandQueueWithPayloads:(id)a0 flushCount:(unsigned int *)a1;
- (int)updateBasebandForConnection:(id)a0;
- (int)deregisterNotificationForTransportStream:(struct OpaqueVCTransportStream { } *)a0;
- (void)cleanupBaseband;
- (void)handleTransportStreamDeactivated:(struct OpaqueVCTransportStream { } *)a0;
- (int)createTransportStream:(struct OpaqueVCTransportStream **)a0 withType:(unsigned int)a1 options:(id)a2;
- (void)resetActiveConnection;

@end
