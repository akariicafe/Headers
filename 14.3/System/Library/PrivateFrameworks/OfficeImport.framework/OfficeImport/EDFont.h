@class NSString, EDResources, EDColorReference;

@interface EDFont : NSObject <NSCopying, EDImmutableObject> {
    EDResources *mResources;
    NSString *mName;
    EDColorReference *mColorReference;
    int mUnderline;
    int mScript;
    double mHeightInTwips;
    int mCharSet;
    int mFamily;
    unsigned int mWeight;
    BOOL mBold;
    BOOL mItalic;
    BOOL mShadow;
    BOOL mStrike;
    BOOL mOutline;
    BOOL mUnderlineOverridden;
    BOOL mStrikeOverridden;
    BOOL mBoldOverridden;
    BOOL mWeightOverridden;
    BOOL mItalicOverridden;
    BOOL mHeightOverridden;
    BOOL mNameOverridden;
    BOOL mDoNotModify;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fontWithResources:(id)a0;

- (int)script;
- (BOOL)isBold;
- (void)setName:(id)a0;
- (void)setWeight:(unsigned int)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)family;
- (id)initWithResources:(id)a0;
- (void)setHeight:(double)a0;
- (void)setScript:(int)a0;
- (id)color;
- (double)height;
- (void)setColor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setOutline:(BOOL)a0;
- (unsigned int)weight;
- (void)setUnderline:(int)a0;
- (void)setBold:(BOOL)a0;
- (id)name;
- (void)setShadow:(BOOL)a0;
- (int)charSet;
- (int)underline;
- (void)setFamily:(int)a0;
- (BOOL)isBoldOverridden;
- (BOOL)isItalicOverridden;
- (BOOL)isUnderlineOverridden;
- (BOOL)isHeightOverridden;
- (BOOL)isItalic;
- (BOOL)isStrikeOverridden;
- (BOOL)isStrike;
- (void)setItalic:(BOOL)a0;
- (void)setStrike:(BOOL)a0;
- (BOOL)isOutline;
- (void)setCharSet:(int)a0;
- (void)setColorReference:(id)a0;
- (void)setDoNotModify:(BOOL)a0;
- (BOOL)isEqualToFont:(id)a0;
- (BOOL)isNameOverridden;
- (BOOL)isShadow;
- (BOOL)isWeightOverridden;
- (id)colorReference;

@end
