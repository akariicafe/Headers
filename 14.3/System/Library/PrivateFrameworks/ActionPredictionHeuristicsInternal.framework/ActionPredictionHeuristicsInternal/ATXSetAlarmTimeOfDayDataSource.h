@class ATXHeuristicDevice;
@protocol _DKKnowledgeQuerying;

@interface ATXSetAlarmTimeOfDayDataSource : NSObject {
    ATXHeuristicDevice *_device;
    id<_DKKnowledgeQuerying> _duetStore;
}

+ (id)timeOfDayFromDonations:(id)a0;
+ (id)medianFrom:(id)a0;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)alarmTimeOfDay:(id /* block */)a0;
- (id)_recentIntentDonationsForBundleId:(id)a0 limit:(unsigned long long)a1;

@end
