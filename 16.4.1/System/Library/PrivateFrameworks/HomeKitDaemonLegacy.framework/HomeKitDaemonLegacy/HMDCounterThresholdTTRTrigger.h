@class NSString;
@protocol RadarDialogPresenting;

@interface HMDCounterThresholdTTRTrigger : NSObject <HMDEventCounterObserver>

@property (readonly, nonatomic) unsigned long long threshold;
@property (readonly, nonatomic) NSString *ttrCategory;
@property (readonly, weak, nonatomic) id<RadarDialogPresenting> dialogPresenter;

- (void).cxx_destruct;
- (id)initWithThreshold:(unsigned long long)a0 ttrCategory:(id)a1 dialogPresenter:(id)a2;
- (void)updatedCounterForEventName:(id)a0 fromOldValue:(unsigned long long)a1 toNewValue:(unsigned long long)a2;

@end
