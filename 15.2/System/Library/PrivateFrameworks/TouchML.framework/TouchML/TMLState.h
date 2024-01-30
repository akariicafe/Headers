@class NSString, NSMutableDictionary, NSMutableOrderedSet;

@interface TMLState : NSObject {
    NSMutableDictionary *_properties;
    TMLState *_baseState;
}

@property (readonly, nonatomic) NSMutableOrderedSet *propertyKeys;
@property (readonly, nonatomic) NSString *tmlStateName;
@property (readonly, nonatomic) NSString *tmlStateExtends;

+ (Class)registerState:(id)a0 forClass:(Class)a1;
+ (id)stateForClass:(Class)a0 stateName:(id)a1;

- (id)valueForKey:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)valueForKeyPath:(id)a0;
- (id)initWithStateName:(id)a0;
- (void)applyToObject:(id)a0 ignorePropertyKeys:(id)a1;
- (void)setTMLValue:(id)a0 forKeyPath:(id)a1;
- (id)tmlIdentifier;
- (void)enterStateFromState:(id)a0;
- (void)leaveStateToState:(id)a0;
- (void)applyToObject:(id)a0 fromState:(id)a1;

@end
