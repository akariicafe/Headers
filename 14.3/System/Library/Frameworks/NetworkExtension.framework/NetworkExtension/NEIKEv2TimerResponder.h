@interface NEIKEv2TimerResponder : NSObject

+ (id)sharedTimerResponder;

- (void)ikeTimerFired:(id)a0;
- (void)childTimerFired:(id)a0;

@end
