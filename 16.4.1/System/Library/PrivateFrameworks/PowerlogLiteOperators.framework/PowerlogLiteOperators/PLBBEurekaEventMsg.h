@class NSMutableString, NSMutableDictionary;

@interface PLBBEurekaEventMsg : PLBasebandMessage

@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableString *sdEvent;
@property (retain, nonatomic) NSMutableString *sdAct;
@property (retain, nonatomic) NSMutableString *sdState;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;

+ (id)bbEuEvMsgNameCMCallEventIncom;
+ (id)bbEuEvMsgNameWCDMARRCState;
+ (id)bbEuEvMsgNameCMCallEventConn;
+ (id)bbEuEvMsgNameCMCallEventEndV2;
+ (id)bbEuEvMsgNameCMCallEventOrig;
+ (id)bbEuEvMsgNameBBEurekaMsgLite;
+ (id)bbEuEvMsgUTRANRRCState;
+ (id)bbEuEvMsgNameCMCallEventEnd;
+ (id)bbEuEvMsgNameGSML1State;
+ (id)bbEuEvMsgNameCMCallEventConnV2;
+ (id)bbEuEvMsgNameCMCDMAExit;
+ (id)bbEuEvMsgEventNotProcessed;
+ (id)bbEuEvMsgNameCMCallEventOrigV2;
+ (id)bbEuEvMsgNameSDEventActionCode;
+ (id)bbEuEvMsgNameLTERRCState;

- (void)setPayload:(id)a0;
- (void)logEventCMCallEventOrigWithId:(id)a0 andCallType:(id)a1 andSrvType:(id)a2 andClientId:(id)a3;
- (void)refreshLTERRCState;
- (void)refreshUTRANRRCState;
- (void)logEventForwardGSML1StateWith:(id)a0;
- (void)logEventCMCallEventConnWithId:(id)a0 andCallType:(id)a1 andSysMode:(id)a2 andClientId:(id)a3;
- (void)logEventCMCallEventConnWithId:(id)a0 andCallType:(id)a1 andSysMode:(id)a2;
- (void)logEventForwardUTRANRRCNextStateAs:(id)a0 andCurrStateAs:(id)a1 andRateAs:(id)a2;
- (void)setHeaderWithSeqNum:(id)a0 andDate:(id)a1 andTimeCal:(double)a2;
- (void)logEventForwardWCDMARRCPrevStateAs:(id)a0 andCurrState:(id)a1 andRate:(id)a2;
- (void)appendToError:(id)a0;
- (void)refreshWCDMARRCState;
- (void)setSDEventActionCodeWith:(id)a0 andSDAction:(id)a1 andSDState:(id)a2;
- (void)logEventForwardSDEventActionCode;
- (void)logEventCMCallEventEndWithId:(id)a0 andNumCalls:(id)a1;
- (void)setError:(id)a0;
- (void)refreshSDEventActionCode;
- (void)logEventPointCMExitCodeWithState:(id)a0;
- (void)logEventNoneEventNotProcessed;
- (void)setEventCode:(unsigned int)a0;
- (void)refreshEventNotProcessed;
- (void)logEventForwardBBEurekaEventMsgLite;
- (void)logEventCMCallEventOrigWithId:(id)a0 andCallType:(id)a1 andSrvType:(id)a2;
- (void)sendAndLogPLEntry:(id)a0;
- (void)addPairWithKey:(id)a0 andWithVal:(id)a1;
- (void)refreshBBEurekaEventMsgLite;
- (id)init;
- (void).cxx_destruct;
- (void)logEventForwardLTERRCStateAs:(id)a0;
- (void)logEventCMCallEventEndWithId:(id)a0 andNumCalls:(id)a1 andClientId:(id)a2;

@end
