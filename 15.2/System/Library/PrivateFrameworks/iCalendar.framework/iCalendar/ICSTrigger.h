@interface ICSTrigger : ICSProperty

- (id)initWithDate:(id)a0;
- (id)initWithDuration:(id)a0 travelRelativeDuration:(id)a1;
- (void)setDuration:(id)a0;
- (id)travelRelativeDuration;
- (BOOL)isDurationBased;
- (id)initWithDuration:(id)a0;
- (void)fixAlarmTrigger;
- (void)setDate:(id)a0;

@end
