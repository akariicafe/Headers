@class NSMutableString, NSMutableDictionary;

@interface PLBBEurekaEventMsg : PLBasebandMessage

@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableString *sdEvent;
@property (retain, nonatomic) NSMutableString *sdAct;
@property (retain, nonatomic) NSMutableString *sdState;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;

+ (id)bbEuEvMsgNameSDEventActionCode;
+ (id)bbEuEvMsgNameCMCallEventEnd;
+ (id)bbEuEvMsgUTRANRRCState;
+ (id)bbEuEvMsgEventNotProcessed;
+ (id)bbEuEvMsgNameCMCallEventOrigV2;
+ (id)bbEuEvMsgNameCMCallEventIncom;
+ (id)bbEuEvMsgNameWCDMARRCState;
+ (id)bbEuEvMsgNameCMCallEventConn;
+ (id)bbEuEvMsgNameCMCallEventOrig;
+ (id)bbEuEvMsgNameCMCallEventConnV2;
+ (id)bbEuEvMsgNameCMCallEventEndV2;
+ (id)bbEuEvMsgNameCMCDMAExit;
+ (id)bbEuEvMsgNameLTERRCState;
+ (id)bbEuEvMsgNameBBEurekaMsgLite;
+ (id)bbEuEvMsgNameGSML1State;

- (void)setEventCode:(unsigned int)a0;
- (void)setHeaderWithSeqNum:(id)a0 andDate:(id)a1 andTimeCal:(double)a2;
- (void)addPairWithKey:(id)a0 andWithVal:(id)a1;
- (void)appendToError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)refreshUTRANRRCState;
- (void)logEventForwardUTRANRRCNextStateAs:(id)a0 andCurrStateAs:(id)a1 andRateAs:(id)a2;
- (void)logEventForwardWCDMARRCPrevStateAs:(id)a0 andCurrState:(id)a1 andRate:(id)a2;
- (void)logEventCMCallEventConnWithId:(id)a0 andCallType:(id)a1 andSysMode:(id)a2;
- (void)logEventCMCallEventOrigWithId:(id)a0 andCallType:(id)a1 andSrvType:(id)a2;
- (void)refreshBBEurekaEventMsgLite;
- (void)refreshSDEventActionCode;
- (void)logEventCMCallEventEndWithId:(id)a0 andNumCalls:(id)a1;
- (void)logEventForwardBBEurekaEventMsgLite;
- (void)logEventPointCMExitCodeWithState:(id)a0;
- (void)sendAndLogPLEntry:(id)a0;
- (void)logEventForwardLTERRCStateAs:(id)a0;
- (void)refreshWCDMARRCState;
- (void)logEventCMCallEventOrigWithId:(id)a0 andCallType:(id)a1 andSrvType:(id)a2 andClientId:(id)a3;
- (void)logEventForwardSDEventActionCode;
- (void)refreshEventNotProcessed;
- (void)logEventCMCallEventConnWithId:(id)a0 andCallType:(id)a1 andSysMode:(id)a2 andClientId:(id)a3;
- (void)logEventNoneEventNotProcessed;
- (void)setError:(id)a0;
- (void)refreshLTERRCState;
- (void)setPayload:(id)a0;
- (void)setSDEventActionCodeWith:(id)a0 andSDAction:(id)a1 andSDState:(id)a2;
- (void)logEventForwardGSML1StateWith:(id)a0;
- (void)logEventCMCallEventEndWithId:(id)a0 andNumCalls:(id)a1 andClientId:(id)a2;

@end
