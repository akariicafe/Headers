@class NSString, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface _CDRateLimiter : NSObject <_CDRateLimiting> {
    NSDate *_lastRecorded;
    long long _balance;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) double period;
@property (readonly) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRateLimiter;

- (BOOL)credit;
- (id)init;
- (void).cxx_destruct;
- (void)resetRateLimitWithTimeStamp:(id)a0;
- (void)recordTimeAndRefillIfNeeded;
- (BOOL)debited;
- (id)initWithCount:(long long)a0 perPeriod:(double)a1;

@end
