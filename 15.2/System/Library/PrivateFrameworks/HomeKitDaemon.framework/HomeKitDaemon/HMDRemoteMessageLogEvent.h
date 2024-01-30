@class NSString, NSDictionary;

@interface HMDRemoteMessageLogEvent : HMMLogEvent <HMDAWDLogEvent, HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) BOOL sending;
@property (readonly, copy, nonatomic) NSString *msgIdentifier;
@property (readonly, copy, nonatomic) NSString *transactionIdentifier;
@property (readonly, nonatomic) BOOL secure;
@property (readonly, nonatomic) NSString *msgName;
@property (readonly, nonatomic) long long msgType;
@property (readonly, nonatomic) NSString *peerInformation;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;

+ (id)receivedRemoteMessage:(id)a0 identifier:(id)a1 transactionIdentifier:(id)a2 messageType:(long long)a3 peerInformation:(id)a4 secure:(BOOL)a5 transportType:(int)a6;
+ (id)receivedRemoteMessage:(id)a0 transportType:(int)a1;
+ (id)sendingRemoteMessage:(id)a0 identifier:(id)a1 transactionIdentifier:(id)a2 messageType:(long long)a3 peerInformation:(id)a4 secure:(BOOL)a5 transportType:(int)a6;
+ (id)sendingRemoteMessage:(id)a0 transportType:(int)a1;
+ (int)awdMessageTypeFromHMDMessageType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithRemoteMessage:(id)a0 identifier:(id)a1 transactionIdentifier:(id)a2 messageType:(long long)a3 peerInformation:(id)a4 secure:(BOOL)a5 transportType:(int)a6 sending:(BOOL)a7;
- (id)serializedEventForDiagnostics:(BOOL)a0;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (int)toAWDType:(int)a0;

@end
