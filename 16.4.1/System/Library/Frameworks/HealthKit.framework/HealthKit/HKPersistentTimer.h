@class NSString;

@interface HKPersistentTimer : NSObject

@property (retain, nonatomic) NSString *fullTimerKey;

+ (id)timerWithKey:(id)a0;
+ (id)_prefixedKeyWithTimerKey:(id)a0;

- (unsigned long long)elapsedNanoseconds;
- (unsigned long long)elapsedSeconds;
- (void)start;
- (void)clear;
- (id)timerValue;
- (void).cxx_destruct;

@end
