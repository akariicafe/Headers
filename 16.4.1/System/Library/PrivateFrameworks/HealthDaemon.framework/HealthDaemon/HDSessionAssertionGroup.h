@class NSMutableSet, NSMutableDictionary;

@interface HDSessionAssertionGroup : NSObject {
    NSMutableSet *_allAssertions;
    NSMutableDictionary *_assertionsForState;
}

@property (readonly, nonatomic) long long state;

- (void)transitionToState:(long long)a0;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)setupState:(long long)a0 withAssertions:(id)a1;

@end
