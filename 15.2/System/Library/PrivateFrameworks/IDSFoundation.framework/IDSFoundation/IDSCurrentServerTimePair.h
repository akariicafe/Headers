@interface IDSCurrentServerTimePair : NSObject

@property (readonly, nonatomic) unsigned long long initialProcessMachTime;
@property (readonly, nonatomic) unsigned long long initialServerTimeInNanoSeconds;

- (id)initWithInitialProcessMachTime:(unsigned long long)a0 initialServerTimeInNanoSeconds:(unsigned long long)a1;

@end
