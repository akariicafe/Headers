@class _UIViewAnimationAttributes;

@interface _BSUIAnimationAttributesFactory : BSUIAnimationFactory {
    _UIViewAnimationAttributes *_attributes;
}

- (double)delay;
- (id)description;
- (id)factoryWithTimingFunction:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (double)duration;
- (unsigned long long)hash;

@end
