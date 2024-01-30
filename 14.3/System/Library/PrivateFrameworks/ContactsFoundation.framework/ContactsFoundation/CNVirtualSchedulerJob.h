@interface CNVirtualSchedulerJob : NSObject

@property unsigned long long time;
@property (readonly, copy) id /* block */ block;

+ (id)jobWithTime:(unsigned long long)a0 block:(id /* block */)a1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTime:(unsigned long long)a0 block:(id /* block */)a1;

@end
