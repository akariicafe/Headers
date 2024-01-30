@class OADDrawable;

@interface PDBuild : NSObject {
    BOOL mIsAnimateBackground;
    OADDrawable *mDrawable;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)drawable;
- (void)setDrawable:(id)a0;
- (void)setIsAnimateBackground:(BOOL)a0;
- (BOOL)isAnimateBackground;

@end
