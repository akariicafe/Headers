@class EDFill, NSString, EDFont, EDContentFormat, EDAlignmentInfo, EDProtection, EDBorders, EDResources;

@interface EDStyle : NSObject <NSCopying, EDImmutableObject> {
    EDResources *mResources;
    unsigned long long mParentIndex;
    unsigned long long mContentFormatId;
    unsigned long long mFontIndex;
    unsigned long long mFillIndex;
    unsigned long long mAlignmentInfoIndex;
    unsigned long long mBordersIndex;
    EDProtection *mProtection;
    unsigned long long mIndex;
    BOOL mContentFormatOverridden;
    BOOL mFontOverridden;
    BOOL mFillOverridden;
    BOOL mAlignmentInfoOverridden;
    BOOL mBordersOverridden;
    BOOL mProtectionOverridden;
    BOOL mDoNotModify;
}

@property (getter=isContentFormatOverridden) BOOL contentFormatOverridden;
@property (getter=isContentFormatApplied) BOOL contentFormatApplied;
@property (retain) EDContentFormat *contentFormat;
@property (getter=isFontOverridden) BOOL fontOverridden;
@property (getter=isFontApplied) BOOL fontApplied;
@property (retain) EDFont *font;
@property (getter=isFillOverridden) BOOL fillOverridden;
@property (getter=isFillApplied) BOOL fillApplied;
@property (retain) EDFill *fill;
@property (getter=isAlignmentInfoOverridden) BOOL alignmentInfoOverridden;
@property (getter=isAlignmentInfoApplied) BOOL alignmentInfoApplied;
@property (retain) EDAlignmentInfo *alignmentInfo;
@property (getter=isBordersOverridden) BOOL bordersOverridden;
@property (getter=isBordersApplied) BOOL bordersApplied;
@property (retain) EDBorders *borders;
@property (getter=isProtectionOverridden) BOOL protectionOverridden;
@property (getter=isProtectionApplied) BOOL protectionApplied;
@property (retain) EDProtection *protection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleWithResources:(id)a0;

- (void)setIndex:(unsigned long long)a0;
- (unsigned long long)index;
- (id)parent;
- (id)initWithResources:(id)a0;
- (void)setParent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)fontIndex;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFontIndex:(unsigned long long)a0;
- (BOOL)isEqualToStyle:(id)a0;
- (unsigned long long)fillIndex;
- (void)setContentFormatId:(unsigned long long)a0;
- (unsigned long long)contentFormatId;
- (void)setParentIndex:(unsigned long long)a0;
- (void)setDoNotModify:(BOOL)a0;
- (BOOL)isEquivalentToStyle:(id)a0;
- (BOOL)isCenterAcrossAligned;
- (unsigned long long)parentIndex;
- (unsigned long long)bordersIndex;
- (void)setBordersIndex:(unsigned long long)a0;
- (void)setFillIndex:(unsigned long long)a0;
- (unsigned long long)alignmentInfoIndex;
- (void)setAlignmentInfoIndex:(unsigned long long)a0;

@end
