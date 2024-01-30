@class NSArray;

@interface _SBBatteryLogContext : NSObject

@property (retain, nonatomic) NSArray *foregroundApplications;
@property (nonatomic) int capacity;
@property (nonatomic) int voltage;
@property (nonatomic) double usageTimeInSeconds;
@property (nonatomic) double standbyTimeInSeconds;
@property (nonatomic) BOOL hasChargedPartially;

- (void).cxx_destruct;

@end
