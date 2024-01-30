@class NSOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface NTSourceAvailabilityManager : NSObject

@property (copy, nonatomic) NSOrderedSet *availabilityEntriesInPreferredOrder;
@property (nonatomic) Class preferredSourceFetchDescriptorClass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) Class likelyPreferredSourceFetchDescriptorClass;
@property (copy, nonatomic) id /* block */ preferredSourceChangedNotificationBlock;

- (void)_recomputePreferredAvailableTodayResultsSource;
- (id)initWithAvailabilityEntriesInPreferredOrder:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_setPreferredAvailableTodayResultsSource:(Class)a0;

@end
