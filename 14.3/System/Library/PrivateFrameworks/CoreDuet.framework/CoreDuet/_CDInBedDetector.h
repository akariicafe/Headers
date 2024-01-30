@class NSObject;
@protocol OS_os_log, _DKKnowledgeQuerying;

@interface _CDInBedDetector : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain) id<_DKKnowledgeQuerying> knowledge;
@property unsigned long long method;

+ (id)inBedDetector;
+ (id)inBedDetectorWithKnowledge:(id)a0;
+ (id)simpleLockBasedInBedDetector;
+ (id)inBedDetectorWithKnowledge:(id)a0 method:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithKnowledge:(id)a0 method:(unsigned long long)a1;
- (id)lockedTimesBetweenStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (id)detectInBedWithPolicyV1BetweenStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (id)findDateIntervalOfEventInStream:(id)a0 datePredicate:(id)a1 valuePredicate:(id)a2 sortDescriptor:(id)a3 error:(id *)a4;
- (id)findLatestEndOfMovementBetweenStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (id)findLastTimeDeviceWasLockedBetweenStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (id)findLastTimeDeviceWasPluggedInBetweenStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (id)detectInBedBetweenBedtimeDate:(id)a0 wakupDate:(id)a1 error:(id *)a2;
- (id)stationaryIntervalsBetweenStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;

@end
