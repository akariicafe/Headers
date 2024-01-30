@class NSMutableDictionary, NSMutableString, NSDate, NSNumber;

@interface PLBBEurekaLogMsg : PLBasebandMessage

@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableString *sdEvent;
@property (retain, nonatomic) NSMutableString *sdAct;
@property (retain, nonatomic) NSMutableString *sdState;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSDate *bbDate;
@property double *bbTimeCal;
@property (retain) NSNumber *bbSeqNum;

+ (id)bbEuLogMsgNameLTESleepMgrStats;

- (void)sendAndLogPLEntry:(id)a0 withName:(id)a1 withType:(id)a2;
- (void)addPairWithKey:(id)a0 andWithVal:(id)a1;
- (void)setPayload:(id)a0;
- (void)setEventCode:(unsigned int)a0;
- (void)setError:(id)a0;
- (void)setHeaderWithSeqNum:(id)a0 andDate:(id)a1 andTimeCal:(double)a2;
- (void).cxx_destruct;
- (id)init;
- (void)logEventBackwardLTESleepMgrStatsWithVer:(id)a0 andML1State:(id)a1 andSES:(id)a2 andSDS:(id)a3 andStDur:(id)a4 andDSlpDur:(id)a5 andLSlpDur:(id)a6;
- (void)refreshLTESleepMgrStats;

@end
