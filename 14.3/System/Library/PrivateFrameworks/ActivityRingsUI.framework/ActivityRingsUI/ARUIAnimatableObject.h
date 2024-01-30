@class NSMutableDictionary;

@interface ARUIAnimatableObject : NSObject {
    NSMutableDictionary *_animatableProperties;
}

- (void).cxx_destruct;
- (void)update:(double)a0;
- (void)addAnimation:(id)a0 forPropertyType:(unsigned long long)a1;
- (void)removeAllAnimationsForPropertyType:(unsigned long long)a0;
- (id)_newAnimatablePropertyForType:(unsigned long long)a0;
- (BOOL)areAnimationsInProgress;
- (id)_animatablePropertyForType:(unsigned long long)a0;
- (void)setValue:(id)a0 forPropertyType:(unsigned long long)a1;
- (id)endingValueForPropertyType:(unsigned long long)a0;

@end
