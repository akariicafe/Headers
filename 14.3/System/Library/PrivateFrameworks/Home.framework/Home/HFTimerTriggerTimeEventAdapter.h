@class HFEventBuilder;
@protocol HFTimeEventBuilder;

@interface HFTimerTriggerTimeEventAdapter : NSObject

@property (readonly, nonatomic) HFEventBuilder<HFTimeEventBuilder> *eventBuilder;

+ (id)adapterWithEventBuilder:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEventBuilder:(id)a0;
- (id)createTriggerWithName:(id)a0 timeZone:(id)a1 recurrences:(id)a2;
- (id)updateTrigger:(id)a0;

@end
