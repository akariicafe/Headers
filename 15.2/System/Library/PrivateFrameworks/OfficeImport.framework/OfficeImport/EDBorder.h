@class EDResources, EDColorReference;

@interface EDBorder : NSObject {
    EDResources *mResources;
    int mType;
    EDColorReference *mColorReference;
    int mDiagonalType;
}

+ (id)borderWithType:(int)a0 colorReference:(id)a1 resources:(id)a2;
+ (id)borderWithType:(int)a0 colorReference:(id)a1 diagonalType:(int)a2 resources:(id)a3;
+ (id)borderWithType:(int)a0 color:(id)a1 resources:(id)a2;
+ (id)borderWithType:(int)a0 color:(id)a1 diagonalType:(int)a2 resources:(id)a3;
+ (id)borderWithType:(int)a0 resources:(id)a1;

- (id)initWithResources:(id)a0;
- (id)description;
- (id)color;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (int)type;
- (unsigned long long)hash;
- (void)setType:(int)a0;
- (void)setDiagonalType:(int)a0;
- (id)colorReference;
- (int)diagonalType;
- (BOOL)isEqualToBorder:(id)a0;

@end
