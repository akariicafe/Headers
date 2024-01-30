@class HMTrigger, HMTriggerBuilder;

@interface HFTriggerBuilderPair : NSObject

@property (readonly, nonatomic) HMTriggerBuilder *builder;
@property (readonly, nonatomic) HMTrigger *trigger;

+ (id)creatingTriggerWithBuilder:(id)a0;
+ (id)updatingTrigger:(id)a0 withBuilder:(id)a1;

- (void).cxx_destruct;
- (void)_notifyObserversOfAddingTrigger:(id)a0 inHome:(id)a1;
- (void)_notifyObserversOfChangingTrigger:(id)a0 inHome:(id)a1;
- (id)commitBuilderInHome:(id)a0;
- (id)initWithTrigger:(id)a0 builder:(id)a1;

@end
