@class NSString, NSMutableDictionary, NSArray, NSMutableArray, NSNumber;

@interface PLBBMav16HwRfLTELogMsg : PLBBMsgRoot

@property (retain) NSString *groupEntryKey;
@property (retain) NSString *groupID;
@property (retain) NSMutableArray *groupArrEntries;
@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSString *error;
@property (retain) NSArray *dlTBSzCnt;
@property (retain) NSNumber *logDuration;
@property (retain) NSNumber *dupMode;
@property (retain) NSNumber *PCCFreq;
@property (retain) NSNumber *PCCBw;
@property (retain) NSNumber *SCC1Freq;
@property (retain) NSNumber *SCC1Bw;
@property (retain) NSNumber *SCC2Freq;
@property (retain) NSNumber *SCC2Bw;
@property (retain) NSArray *txPwrCnt;
@property (retain) NSArray *caSCCCnt;
@property (retain) NSArray *ulCaSCCCnt;
@property (retain) NSArray *actRxTxCnt;
@property (retain) NSArray *sleepStateIdleCnt;
@property (retain) NSArray *sleepStateConnCnt;
@property (retain) NSArray *rsrpIdleCnt;
@property (retain) NSArray *rsrpConnCnt;
@property (retain) NSArray *sinrIdleCnt;
@property (retain) NSArray *sinrConnCnt;
@property (retain) NSArray *arxStateCnt;
@property (retain) NSArray *nlicStateCnt;
@property (retain) NSArray *bpeStats;
@property (retain) NSNumber *ardRxDOff;
@property (retain) NSNumber *uSleepPCCCnt;
@property (retain) NSNumber *uSleepSCC1Cnt;
@property (retain) NSNumber *uSleepSCC2Cnt;
@property (retain) NSArray *hsicPCC;
@property (retain) NSArray *hsicSCC1;
@property (retain) NSArray *hsicSCC2;
@property (retain) NSNumber *arxOffPCC;
@property (retain) NSNumber *arxOffSCC1;
@property (retain) NSNumber *arxOffSCC2;
@property (retain) NSArray *arxBaselinePCC;
@property (retain) NSArray *arxBaselineSCC1;
@property (retain) NSArray *arxBaselineSCC2;
@property (retain) NSArray *arxQicePCC;
@property (retain) NSArray *arxQiceSCC1;
@property (retain) NSArray *arxQiceSCC2;

+ (id)entryEventBackwardDefinitionBBMav16HwRfLTE;

- (void)sendAndLogPLEntry:(id)a0 withName:(id)a1 withType:(id)a2;
- (void)setHeaderWithSeqNum:(id)a0 andDate:(id)a1 andTimeCal:(double)a2;
- (void)addPairWithKey:(id)a0 andWithVal:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)logEventBackwardBBMav16HwRfLTE;
- (void)populateMav16Entry:(id)a0;
- (void)refreshMav16BBRfLTE;

@end
