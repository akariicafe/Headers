@class NSString, NSNumber, NSDictionary;

@interface IDSSessionEndedMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) unsigned int endedReason;
@property (readonly, nonatomic) unsigned int genericError;
@property (readonly, nonatomic) unsigned int gameKitError;
@property (readonly, nonatomic) unsigned int conferenceMiscError;
@property (readonly, nonatomic) NSNumber *callDuration;
@property (readonly, nonatomic) BOOL isNetworkEnabled;
@property (readonly, nonatomic) BOOL isNetworkActive;
@property (readonly, nonatomic) BOOL isNetworkReachable;
@property (readonly, nonatomic) unsigned int networkCheckResult;
@property (readonly, nonatomic) NSNumber *dataRate;
@property (readonly, nonatomic) NSNumber *gksError;
@property (readonly, nonatomic) NSNumber *connectDuration;
@property (readonly, nonatomic) unsigned int remoteNetworkConnection;
@property (readonly, nonatomic) unsigned int localNetworkConnection;
@property (readonly, nonatomic) unsigned int connectionType;
@property (readonly, nonatomic) BOOL usesRelay;
@property (readonly, nonatomic) NSNumber *currentNATType;
@property (readonly, nonatomic) NSNumber *remoteNATType;
@property (readonly, nonatomic) NSNumber *relayConnectDuration;
@property (readonly, nonatomic) BOOL isInitiator;
@property (readonly, nonatomic) NSNumber *linkQuality;
@property (readonly, nonatomic) NSNumber *gksReturnCode;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGuid:(id)a0 endedReason:(unsigned int)a1 genericError:(unsigned int)a2 gameKitError:(unsigned int)a3 conferenceMiscError:(unsigned int)a4 callDuration:(id)a5 isNetworkEnabled:(BOOL)a6 isNetworkActive:(BOOL)a7 isNetworkReachable:(BOOL)a8 networkCheckResult:(unsigned int)a9 dataRate:(id)a10 gksError:(id)a11 connectDuration:(id)a12 remoteNetworkConnection:(unsigned int)a13 localNetworkConnection:(unsigned int)a14 connectionType:(unsigned int)a15 usesRelay:(BOOL)a16 currentNATType:(id)a17 remoteNATType:(id)a18 relayConnectDuration:(id)a19 isInitiator:(BOOL)a20 linkQuality:(id)a21 gksReturnCode:(id)a22;

@end
