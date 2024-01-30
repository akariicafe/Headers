@class HFEventBuilder;
@protocol HFTimeEventBuilder;

@interface HFTimerTriggerTimeEventAdapter : NSObject

@property (readonly, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;

+ (id)adapterWithEventBuilder:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEventBuilder:(id)a0;
- (id)createTriggerWithName:(id)a0 timeZone:(id)a1 recurrences:(id)a2;
- (id)updateTrigger:(id)a0;

@end
