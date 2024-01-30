@class NSDate;
@protocol ABVCardTimeProvider;

@interface ABVCardWatchdogTimer : NSObject

@property (nonatomic) unsigned long long ticks;
@property (readonly, nonatomic) id<ABVCardTimeProvider> timeProvider;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) BOOL valid;

+ (id)timerWithTimeProvider:(id)a0;
+ (BOOL)shouldCheckTime;

- (BOOL)isStarted;
- (void)dealloc;
- (BOOL)isValid;
- (id)initWithTimeProvider:(id)a0;
- (void)checkValidity;
- (void)start;

@end
