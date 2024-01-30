@interface TRIDeferralNotifier : NSObject

+ (void)forwardDeferralsFromMonitoredActivity:(id)a0 usingDarwinNotificationName:(const char *)a1 whileExecutingBlock:(id /* block */)a2;

@end
