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

- (void)sendAndLogPLEntry:(id)a0 withName:(id)a1 withType:(id)a2;
- (void)populateEntry:(id)a0;
- (void)setHeaderWithSeqNum:(id)a0 andDate:(id)a1 andTimeCal:(double)a2;
- (void)refreshRequest;
- (void)addPairWithKey:(id)a0 andWithVal:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)logEventBackwardBBMavHwRfHDR;

@end
