@class EDResources;

@interface EDBorders : NSObject <NSCopying> {
    EDResources *mResources;
    unsigned long long mLeftBorderIndex;
    unsigned long long mRightBorderIndex;
    unsigned long long mTopBorderIndex;
    unsigned long long mBottomBorderIndex;
    unsigned long long mDiagonalBorderIndex;
    unsigned long long mVerticalBorderIndex;
    unsigned long long mHorizontalBorderIndex;
}

+ (id)bordersWithLeft:(id)a0 right:(id)a1 top:(id)a2 bottom:(id)a3 diagonal:(id)a4 resources:(id)a5;
+ (id)bordersWithResources:(id)a0;
+ (id)bordersWithLeft:(id)a0 right:(id)a1 top:(id)a2 bottom:(id)a3 diagonal:(id)a4 vertical:(id)a5 horizontal:(id)a6 resources:(id)a7;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResources:(id)a0;
- (void)setRightBorder:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)rightBorder;
- (id)topBorder;
- (id)bottomBorder;
- (void)setTopBorder:(id)a0;
- (void)setBottomBorder:(id)a0;
- (id)leftBorder;
- (void)setLeftBorder:(id)a0;
- (void)setVerticalBorder:(id)a0;
- (void)setHorizontalBorder:(id)a0;
- (BOOL)isEqualToBorders:(id)a0;
- (void)setDiagonalBorder:(id)a0;
- (id)verticalBorder;
- (id)horizontalBorder;
- (id)diagonalBorder;

@end
