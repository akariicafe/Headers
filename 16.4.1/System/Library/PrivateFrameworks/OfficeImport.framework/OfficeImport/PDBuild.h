@class OADDrawable;

@interface PDBuild : NSObject {
    BOOL mIsAnimateBackground;
    OADDrawable *mDrawable;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)drawable;
- (void)setDrawable:(id)a0;
- (BOOL)isAnimateBackground;
- (void)setIsAnimateBackground:(BOOL)a0;

@end
