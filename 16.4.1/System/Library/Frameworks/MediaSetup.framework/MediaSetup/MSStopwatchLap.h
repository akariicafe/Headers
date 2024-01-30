@class NSString;

@interface MSStopwatchLap : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long lapTime;
@property (readonly, nonatomic) unsigned long long lapTimeMS;

- (void).cxx_destruct;
- (id)initWithLapTime:(unsigned long long)a0 andName:(id)a1;

@end
