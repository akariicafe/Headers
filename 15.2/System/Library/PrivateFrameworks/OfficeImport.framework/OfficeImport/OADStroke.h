@class OADLineJoin, OADLineEnd, OADFill, OADColor, OADDash;

@interface OADStroke : OADProperties <NSCopying> {
    OADColor *mColor;
    OADFill *mFill;
    OADDash *mDash;
    OADLineJoin *mJoin;
    float mWidth;
    unsigned char mCap;
    unsigned char mCompoundType;
    int mPenAlignment;
    unsigned char mIsColorOverridden : 1;
    unsigned char mIsWidthOverridden : 1;
    unsigned char mIsCapOverridden : 1;
    unsigned char mIsCompoundTypeOverridden : 1;
    unsigned char mIsPenAlignmentOverridden : 1;
}

@property (retain, nonatomic) OADLineEnd *head;
@property (retain, nonatomic) OADLineEnd *tail;

+ (id)defaultProperties;
+ (id)nullStroke;
+ (id)blackStroke;

- (id)fill;
- (unsigned char)compoundType;
- (unsigned char)cap;
- (id)join;
- (id)initWithDefaults;
- (id)dash;
- (void)setParent:(id)a0;
- (void)setCompoundType:(unsigned char)a0;
- (void)setWidth:(float)a0;
- (id)color;
- (float)width;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setColor:(id)a0;
- (void)setCap:(unsigned char)a0;
- (void)setDash:(id)a0;
- (void)setJoin:(id)a0;
- (void)setFill:(id)a0;
- (void)setPenAlignment:(int)a0;
- (void)setStyleColor:(id)a0;
- (BOOL)isCapOverridden;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)isAnythingOverridden;
- (void)removeUnnecessaryOverrides;
- (BOOL)isColorOverridden;
- (BOOL)isWidthOverridden;
- (BOOL)isFillOverridden;
- (BOOL)isDashOverridden;
- (BOOL)isJoinOverridden;
- (BOOL)isCompoundTypeOverridden;
- (BOOL)isPenAlignmentOverridden;
- (BOOL)isHeadOverridden;
- (BOOL)isTailOverridden;
- (int)penAlignment;

@end
