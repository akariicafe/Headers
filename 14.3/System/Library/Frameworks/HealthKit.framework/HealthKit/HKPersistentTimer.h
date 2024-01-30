@class NSString;

@interface HKPersistentTimer : NSObject

@property (retain, nonatomic) NSString *fullTimerKey;

+ (id)timerWithKey:(id)a0;
+ (id)_prefixedKeyWithTimerKey:(id)a0;

- (void)clear;
- (void).cxx_destruct;
- (unsigned long long)elapsedSeconds;
- (id)timerValue;
- (unsigned long long)elapsedNanoseconds;
- (void)start;

@end
