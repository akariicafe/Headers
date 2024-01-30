@class HMActionSetBuilder, HMActionSet;

@interface HFActionSetBuilderPair : NSObject

@property (readonly, nonatomic) HMActionSetBuilder *builder;
@property (readonly, nonatomic) HMActionSet *actionSet;

- (void).cxx_destruct;
- (id)initWithBuilder:(id)a0;
- (id)commitActionSetInHome:(id)a0;
- (id)initWithActionSet:(id)a0 builder:(id)a1;

@end
