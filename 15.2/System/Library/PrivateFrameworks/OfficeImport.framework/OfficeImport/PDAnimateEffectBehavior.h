@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {
    BOOL mHasTransition;
    int mTransition;
}

@property (retain, nonatomic) NSMutableDictionary *propertyMap;

- (void)setTransition:(int)a0;
- (int)transition;
- (BOOL)hasProperties;
- (BOOL)hasTransition;
- (void).cxx_destruct;
- (id)init;

@end
