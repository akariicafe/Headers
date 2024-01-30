@class NSString, NSMutableDictionary, NSArray, NSNumber;

@interface PLBBMavHwRfOOSLogMsg : PLBasebandMessage

@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary *commonInfo;
@property (retain, nonatomic) NSMutableDictionary *kvPairs;
@property (retain) NSString *error;
@property (retain) NSNumber *logDuration;
@property unsigned char oosInProgress;
@property (retain) NSNumber *oosTimes;
@property (retain) NSNumber *oosTicks;
@property (retain) NSNumber *pssiTicks;
@property (retain) NSArray *oosLtePssiTimes;
@property (retain) NSArray *oosLtePssiStatTicks;
@property (retain) NSArray *oosGsmPssiTimes;
@property (retain) NSArray *oosGsmPssiStatTicks;
@property (retain) NSArray *oosWcdmaPssiTimes;
@property (retain) NSArray *oosWcdmaPssiStatTicks;
@property (retain) NSArray *oosTdsPssiTimes;
@property (retain) NSArray *oosTdsPssiStatTicks;

+ (id)entryEventBackwardDefinitionOOSPerRat;

- (void)setHeaderWithSeqNum:(id)a0 andDate:(id)a1 andTimeCal:(double)a2;
- (id)init;
- (void).cxx_destruct;
- (void)populateEntry:(id)a0;
- (void)refreshBBMavHwRfOOS;
- (id)logEventBackwardBBMavHwRfOos;

@end
