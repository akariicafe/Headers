@class NSMutableSet, NSMutableDictionary;

@interface HDSessionAssertionGroup : NSObject {
    NSMutableSet *_allAssertions;
    NSMutableDictionary *_assertionsForState;
}

@property (readonly, nonatomic) long long state;

- (void)transitionToState:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)setupState:(long long)a0 withAssertions:(id)a1;

@end
