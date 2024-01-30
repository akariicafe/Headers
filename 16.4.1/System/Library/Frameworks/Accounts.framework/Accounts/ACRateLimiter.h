@class NSDate, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ACRateLimiter : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *instanceQueue;
@property (readonly) NSObject<OS_dispatch_queue> *vacuumQueue;
@property (retain) NSMutableDictionary *keyToSimpleRateLimiter;
@property (readonly) double vacuumTimeInterval;
@property BOOL isVacuumInProgress;
@property (retain) NSDate *nextVacuumDate;
@property (readonly) unsigned long long maximum;
@property (readonly) double timeInterval;

- (void).cxx_destruct;
- (id)initWithMaximum:(unsigned long long)a0 inTimeInterval:(double)a1;
- (void)_vacuumQueue_vacuum;
- (BOOL)_vacuumQueue_vacuumKey:(id)a0;
- (BOOL)reservePerformActionForKey:(id)a0;
- (id)simpleRateLimiterForKey:(id)a0;
- (void)vacuumIfNeeded;

@end
