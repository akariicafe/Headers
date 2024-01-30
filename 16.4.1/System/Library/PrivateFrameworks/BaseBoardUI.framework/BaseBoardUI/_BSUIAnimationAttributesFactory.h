@class _UIViewAnimationAttributes;

@interface _BSUIAnimationAttributesFactory : BSUIAnimationFactory {
    _UIViewAnimationAttributes *_attributes;
}

- (double)delay;
- (double)duration;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)factoryWithTimingFunction:(id)a0;

@end
