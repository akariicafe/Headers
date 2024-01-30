@class NSDate;

@interface SCRMutableSchedulingConfiguration : SCRSchedulingConfiguration

@property (retain, nonatomic) NSDate *latestStartDate;
@property (copy, nonatomic) NSDate *earliestStartDate;
@property (nonatomic) double schedulingWindow;
@property (nonatomic) BOOL wakeDeviceForDeadline;
@property (nonatomic) BOOL requiresClassAAccess;
@property (nonatomic) BOOL requiresNetworkAccess;

- (void)setLatestStartDate:(id)a0;

@end
