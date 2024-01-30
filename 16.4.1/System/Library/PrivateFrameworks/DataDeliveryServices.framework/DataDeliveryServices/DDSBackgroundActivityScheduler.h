@class NSMutableDictionary;
@protocol DDSBackgroundActivitySchedulerDelegate;

@interface DDSBackgroundActivityScheduler : NSObject

@property (retain, nonatomic) NSMutableDictionary *schedulerByIdentifier;
@property (retain, nonatomic) id<DDSBackgroundActivitySchedulerDelegate> delegate;

- (void)cancelActivityWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)scheduleActivityWithIdentifier:(id)a0 interval:(double)a1 tolerance:(double)a2;

@end
