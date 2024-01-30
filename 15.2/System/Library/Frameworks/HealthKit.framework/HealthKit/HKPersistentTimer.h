@class NSString;

@interface HKPersistentTimer : NSObject

@property (retain, nonatomic) NSString *fullTimerKey;

+ (id)timerWithKey:(id)a0;
+ (id)_prefixedKeyWithTimerKey:(id)a0;

- (void)clear;
- (void)start;
- (void).cxx_destruct;
- (id)timerValue;
- (unsigned long long)elapsedNanoseconds;
- (unsigned long long)elapsedSeconds;

@end
