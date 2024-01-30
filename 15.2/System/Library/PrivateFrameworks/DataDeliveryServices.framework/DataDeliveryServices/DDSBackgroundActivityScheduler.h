@class NSMutableDictionary;
@protocol DDSBackgroundActivitySchedulerDelegate;

@interface DDSBackgroundActivityScheduler : NSObject

@property (retain, nonatomic) NSMutableDictionary *schedulerByIdentifier;
@property (retain, nonatomic) id<DDSBackgroundActivitySchedulerDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)cancelActivityWithIdentifier:(id)a0;
- (void)scheduleActivityWithIdentifier:(id)a0 interval:(double)a1 tolerance:(double)a2;

@end
