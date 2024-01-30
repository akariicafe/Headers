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

- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)notificationQueue;
- (id)clients;
- (id)clockName;
- (id)init;
- (void).cxx_destruct;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0 withFlags:(unsigned int *)a1;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0 withFlags:(unsigned int *)a1;
- (BOOL)convertFromMachAbsoluteTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toMachAbsoluteTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)a0;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)a0;
- (BOOL)getRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 machAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (double)hostRateRatio;

@end
