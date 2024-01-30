@class NSString, NSMutableDictionary;

@interface CATState : NSObject {
    NSMutableDictionary *mTransitionByTriggeringEvent;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) SEL enterAction;
@property (nonatomic) SEL exitAction;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)addTransitionToState:(id)a0 triggeringEvent:(id)a1;
- (id)transitionWithTriggeringEvent:(id)a0;
- (id)description;
- (void)addTransitionToState:(id)a0 triggeringEvent:(id)a1 action:(SEL)a2;
- (id)initWithName:(id)a0;

@end
