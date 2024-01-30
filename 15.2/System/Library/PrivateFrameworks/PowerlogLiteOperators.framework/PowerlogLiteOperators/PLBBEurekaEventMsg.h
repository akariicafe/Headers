@class NSMutableString, NSMutableDictionary;

@interface PLBBEurekaEventMsg : PLBasebandMessage

@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableString *sdEvent;
@property (retain, nonatomic) NSMutableString *sdAct;
@property (retain, nonatomic) NSMutableString *sdState;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;

+ (id)bbEuEvMsgNameWCDMARRCState;
+ (id)bbEuEvMsgNameCMCallEventOrigV2;
+ (id)bbEuEvMsgUTRANRRCState;
+ (id)bbEuEvMsgNameCMCallEventIncom;
+ (id)bbEuEvMsgNameBBEurekaMsgLite;
+ (id)bbEuEvMsgNameLTERRCState;
+ (id)bbEuEvMsgNameCMCallEventConn;
+ (id)bbEuEvMsgNameCMCallEventEndV2;
+ (id)bbEuEvMsgNameCMCDMAExit;
+ (id)bbEuEvMsgNameGSML1State;
+ (id)bbEuEvMsgNameCMCallEventEnd;
+ (id)bbEuEvMsgNameSDEventActionCode;
+ (id)bbEuEvMsgNameCMCallEventOrig;
+ (id)bbEuEvMsgEventNotProcessed;
+ (id)bbEuEvMsgNameCMCallEventConnV2;

- (void)addPairWithKey:(id)a0 andWithVal:(id)a1;
- (void)logEventForwardBBEurekaEventMsgLite;
- (void)logEventCMCallEventOrigWithId:(id)a0 andCallType:(id)a1 andSrvType:(id)a2;
- (void)refreshWCDMARRCState;
- (void)refreshSDEventActionCode;
- (void)setPayload:(id)a0;
- (void)setSDEventActionCodeWith:(id)a0 andSDAction:(id)a1 andSDState:(id)a2;
- (void)logEventForwardLTERRCStateAs:(id)a0;
- (void)setEventCode:(unsigned int)a0;
- (void)sendAndLogPLEntry:(id)a0;
- (void)logEventCMCallEventConnWithId:(id)a0 andCallType:(id)a1 andSysMode:(id)a2 andClientId:(id)a3;
- (void)appendToError:(id)a0;
- (void)logEventForwardSDEventActionCode;
- (void)logEventPointCMExitCodeWithState:(id)a0;
- (void)logEventCMCallEventEndWithId:(id)a0 andNumCalls:(id)a1;
- (void)refreshEventNotProcessed;
- (void)refreshLTERRCState;
- (void)logEventNoneEventNotProcessed;
- (void)setError:(id)a0;
- (void)logEventCMCallEventOrigWithId:(id)a0 andCallType:(id)a1 andSrvType:(id)a2 andClientId:(id)a3;
- (void)setHeaderWithSeqNum:(id)a0 andDate:(id)a1 andTimeCal:(double)a2;
- (void).cxx_destruct;
- (void)logEventForwardGSML1StateWith:(id)a0;
- (void)refreshBBEurekaEventMsgLite;
- (id)init;
- (void)logEventForwardWCDMARRCPrevStateAs:(id)a0 andCurrState:(id)a1 andRate:(id)a2;
- (void)logEventCMCallEventConnWithId:(id)a0 andCallType:(id)a1 andSysMode:(id)a2;
- (void)refreshUTRANRRCState;
- (void)logEventCMCallEventEndWithId:(id)a0 andNumCalls:(id)a1 andClientId:(id)a2;
- (void)logEventForwardUTRANRRCNextStateAs:(id)a0 andCurrStateAs:(id)a1 andRateAs:(id)a2;

@end
