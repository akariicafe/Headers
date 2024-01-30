@class HKSPSleepSchedule;
@protocol HKSPSuggestionProvider;

@interface _HKSPScheduleAndProviderPair : NSObject

@property (retain, nonatomic) id<HKSPSuggestionProvider> provider;
@property (retain, nonatomic) HKSPSleepSchedule *schedule;

- (void).cxx_destruct;

@end
