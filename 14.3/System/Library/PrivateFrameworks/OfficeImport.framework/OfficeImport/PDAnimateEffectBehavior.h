@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {
    BOOL mHasTransition;
    int mTransition;
}

@property (retain, nonatomic) NSMutableDictionary *propertyMap;

- (void)setTransition:(int)a0;
- (id)init;
- (BOOL)hasProperties;
- (void).cxx_destruct;
- (int)transition;
- (BOOL)hasTransition;

@end
