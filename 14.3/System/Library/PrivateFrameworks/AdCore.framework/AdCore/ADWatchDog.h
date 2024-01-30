@class NSString;

@interface ADWatchDog : NSObject

@property (retain, nonatomic) NSString *reason;
@property (nonatomic) unsigned long long delayTime;

- (void).cxx_destruct;
- (id)initWithReason:(id)a0 andDelay:(unsigned long long)a1;
- (void)updateReason:(id)a0;

@end
