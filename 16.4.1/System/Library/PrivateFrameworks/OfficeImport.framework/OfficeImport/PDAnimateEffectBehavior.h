@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {
    BOOL mHasTransition;
    int mTransition;
}

@property (retain, nonatomic) NSMutableDictionary *propertyMap;

- (int)transition;
- (BOOL)hasProperties;
- (void)setTransition:(int)a0;
- (id)init;
- (BOOL)hasTransition;
- (void).cxx_destruct;

@end
