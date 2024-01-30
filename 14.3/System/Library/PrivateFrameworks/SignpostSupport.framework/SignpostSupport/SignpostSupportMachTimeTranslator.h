@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SignpostSupportMachTimeTranslator : NSObject

@property (readonly, nonatomic) NSMutableArray *translationRanges;
@property (readonly, nonatomic) NSMutableArray *startMachAbsoluteTimes;
@property (readonly, nonatomic) NSMutableArray *startMachContinuousTimes;
@property (nonatomic) unsigned long long maxEntries;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property BOOL isMonitoringSleepWake;
@property (readonly, nonatomic) BOOL containsContinuousTimeJumps;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithDataRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dataRepresentation;
- (void)addTimestampPairWithMachAbsoluteTime:(unsigned long long)a0 machContinuousTime:(unsigned long long)a1;
- (unsigned long long)machAbsoluteTimeForMachContinuousTime:(unsigned long long)a0;
- (unsigned long long)machContinuousTimeForMachAbsoluteTime:(unsigned long long)a0;
- (id)serializableDictionaryRepresentation;

@end
