@interface WFNetworkFailTracker : NSObject

@property (readonly, nonatomic) int numConsecutiveFails;
@property (readonly, nonatomic) double lastFailTimeInSeconds;

- (void)incrementFailCount;
- (BOOL)lastFailTimeExpiredForSettings:(id)a0;

@end
