@class OADDrawable;

@interface PDBuild : NSObject {
    BOOL mIsAnimateBackground;
    OADDrawable *mDrawable;
}

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)drawable;
- (void)setDrawable:(id)a0;
- (void)setIsAnimateBackground:(BOOL)a0;
- (BOOL)isAnimateBackground;

@end
