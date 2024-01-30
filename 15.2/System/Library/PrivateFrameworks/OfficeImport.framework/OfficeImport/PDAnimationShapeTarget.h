@class OADDrawable;

@interface PDAnimationShapeTarget : PDAnimationTarget {
    OADDrawable *mDrawable;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)drawable;
- (void)setDrawable:(id)a0;

@end
