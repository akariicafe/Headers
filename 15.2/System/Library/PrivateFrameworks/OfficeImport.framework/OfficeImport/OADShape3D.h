@class OADColor, OADBevel;

@interface OADShape3D : NSObject <NSCopying> {
    OADBevel *mTopBevel;
    OADBevel *mBottomBevel;
    OADColor *mExtrusionColor;
    float mExtrusionHeight;
    OADColor *mContourColor;
    float mContourWidth;
    float mShapeDepth;
    int mMaterial;
}

+ (id)nullShape3D;

- (id)description;
- (int)material;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setMaterial:(int)a0;
- (void)setTopBevel:(id)a0;
- (void)setBottomBevel:(id)a0;
- (void)setExtrusionColor:(id)a0;
- (void)setContourColor:(id)a0;
- (void)setShapeDepth:(float)a0;
- (void)setExtrusionHeight:(float)a0;
- (void)setContourWidth:(float)a0;
- (float)shapeDepth;
- (float)extrusionHeight;
- (float)contourWidth;
- (id)topBevel;
- (id)bottomBevel;
- (id)extrusionColor;
- (id)contourColor;

@end
