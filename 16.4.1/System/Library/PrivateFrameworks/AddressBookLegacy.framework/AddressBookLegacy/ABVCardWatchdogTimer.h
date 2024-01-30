@class NSDate;
@protocol ABVCardTimeProvider;

@interface ABVCardWatchdogTimer : NSObject

@property (nonatomic) unsigned long long ticks;
@property (readonly, nonatomic) id<ABVCardTimeProvider> timeProvider;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) BOOL valid;

+ (BOOL)shouldCheckTime;
+ (id)timerWithTimeProvider:(id)a0;

- (BOOL)isStarted;
- (BOOL)isValid;
- (void)dealloc;
- (id)initWithTimeProvider:(id)a0;
- (void)start;
- (void)checkValidity;

@end
