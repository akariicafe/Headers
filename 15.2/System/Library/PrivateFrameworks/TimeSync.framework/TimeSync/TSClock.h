@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TSClock : NSObject {
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
}

@property (readonly, retain, nonatomic) NSMutableArray *clients;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) unsigned long long clockIdentifier;
@property (nonatomic) int lockState;
@property (readonly, nonatomic) double hostRateRatio;
@property (readonly, copy, nonatomic) NSString *clockName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue;

+ (id)clockNameForClockIdentifier:(unsigned long long)a0;
+ (unsigned long long)_mach_absolute_time;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0;

- (BOOL)convertFromTimeSyncTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toMachAbsoluteTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (BOOL)convertFromMachAbsoluteTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (id)clients;
- (double)hostRateRatio;
- (unsigned long long)convertFromDomainToTimeSyncTime:(unsigned long long)a0;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toTimeSyncTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromTimeSyncToDomainTime:(unsigned long long)a0;
- (unsigned long long)convertFromDomainIntervalToTimeSyncTimeInterval:(unsigned long long)a0;
- (unsigned long long)convertFromTimeSyncTimeIntervalToDomainInterval:(unsigned long long)a0;
- (BOOL)getTimeSyncTimeRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 timeSyncAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)a0;
- (BOOL)getMachAbsoluteRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 machAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0;
- (id)clockName;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)a0;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (void)removeClient:(id)a0;
- (id)notificationQueue;
- (void).cxx_destruct;
- (id)init;
- (void)addClient:(id)a0;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0 withFlags:(unsigned int *)a1;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0 withFlags:(unsigned int *)a1;
- (BOOL)getRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 machAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;

@end
