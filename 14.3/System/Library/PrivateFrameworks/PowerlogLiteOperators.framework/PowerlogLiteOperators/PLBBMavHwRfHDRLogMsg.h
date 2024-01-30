@class NSString, NSMutableDictionary, NSNumber;

@interface PLBBMavHwRfHDRLogMsg : PLBasebandMessage

@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSString *error;
@property (retain) NSNumber *logDuration;
@property (retain) NSNumber *sDTXOnFrame;
@property (retain) NSNumber *sDTXOffFrame;
@property (retain) NSNumber *lDTXOnFrame;
@property (retain) NSNumber *lDTXOffFrame;
@property (retain) NSNumber *tDTXOnFrame;
@property (retain) NSNumber *tDTXOffFrame;

+ (id)entryEventBackwardDefinitionBBMavHwRfHDR;

- (void)refreshRequest;
- (void)setHeaderWithSeqNum:(id)a0 andDate:(id)a1 andTimeCal:(double)a2;
- (void)addPairWithKey:(id)a0 andWithVal:(id)a1;
- (id)init;
- (void)sendAndLogPLEntry:(id)a0 withName:(id)a1 withType:(id)a2;
- (void).cxx_destruct;
- (void)populateEntry:(id)a0;
- (id)logEventBackwardBBMavHwRfHDR;

@end
