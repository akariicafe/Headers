@class NSString, NSDictionary;

@interface HMDRemoteMessageLogEvent : HMDLogEvent <HMDAWDLogEvent, HMDDiagnosticReportLogging, HMDCoreAnalyticsLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) BOOL sending;
@property (readonly, copy, nonatomic) NSString *msgIdentifier;
@property (readonly, copy, nonatomic) NSString *transactionIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *msgPayload;
@property (readonly, nonatomic) BOOL secure;
@property (readonly, nonatomic) NSString *msgName;
@property (readonly, nonatomic) long long msgType;
@property (readonly, nonatomic) NSString *peerInformation;

+ (id)uuid;
+ (id)receivedRemoteMessage:(id)a0 identifier:(id)a1 transactionIdentifier:(id)a2 messageType:(long long)a3 peerInformation:(id)a4 secure:(BOOL)a5 transportType:(int)a6;
+ (id)sendingRemoteMessage:(id)a0 identifier:(id)a1 transactionIdentifier:(id)a2 messageType:(long long)a3 peerInformation:(id)a4 secure:(BOOL)a5 transportType:(int)a6;
+ (id)receivedRemoteMessage:(id)a0 transportType:(int)a1;
+ (id)sendingRemoteMessage:(id)a0 transportType:(int)a1;
+ (int)awdMessageTypeFromHMDMessageType:(long long)a0;

- (id)eventName;
- (void).cxx_destruct;
- (id)serializedEvent;
- (BOOL)shouldSubmitEvent;
- (id)initWithRemoteMessage:(id)a0 identifier:(id)a1 transactionIdentifier:(id)a2 messageType:(long long)a3 peerInformation:(id)a4 secure:(BOOL)a5 transportType:(int)a6 sending:(BOOL)a7;
- (id)serializedEventForDiagnostics:(BOOL)a0;
- (id)asCommaSeparateValues;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (int)toAWDType:(int)a0;
- (void)updateDiagnosticReportSignature:(id)a0;

@end
