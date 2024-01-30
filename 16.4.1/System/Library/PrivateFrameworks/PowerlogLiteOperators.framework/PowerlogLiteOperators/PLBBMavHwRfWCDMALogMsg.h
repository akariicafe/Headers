@class NSString, NSMutableDictionary, NSArray, NSMutableArray, NSNumber;

@interface PLBBMavHwRfWCDMALogMsg : PLBasebandMessage

@property (retain) NSString *groupEntryKey;
@property (retain) NSString *groupID;
@property (retain) NSMutableArray *groupArrEntries;
@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSString *error;
@property (retain) NSNumber *logDuration;
@property (retain) NSArray *SCEqStatCnt;
@property (retain) NSArray *DCEqStatCnt;
@property (retain) NSArray *SCQsetEqStatCnt;
@property (retain) NSArray *DCQsetEqStatCnt;
@property (retain) NSArray *DurInCarrierMode;
@property (retain) NSArray *RABModeCnt;
@property (retain) NSArray *RABTypeCnt;
@property (retain) NSArray *TxPwrBucket;
@property (retain) NSNumber *fetCnt;
@property (retain) NSNumber *cpcRxOnCnt;
@property (retain) NSNumber *cpcRxTxOffCnt;
@property (retain) NSNumber *cpcTimeCnt;
@property (retain) NSNumber *cpcEnergy;

+ (id)entryEventBackwardDefinitionBBMav16BHwRfWCDMA;
+ (id)entryEventBackwardDefinitionBBMav16HwRfWCDMA;
+ (id)entryEventBackwardDefinitionBBMavHwRfWCDMA;

- (void)sendAndLogPLEntry:(id)a0 withName:(id)a1 withType:(id)a2;
- (void)populateEntry:(id)a0;
- (void)setHeaderWithSeqNum:(id)a0 andDate:(id)a1 andTimeCal:(double)a2;
- (void)refreshRequest;
- (void)addPairWithKey:(id)a0 andWithVal:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)logEventBackwardBBMavHwRfWCDMA;

@end
