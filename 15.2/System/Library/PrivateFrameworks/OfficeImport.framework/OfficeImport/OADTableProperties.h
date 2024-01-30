@class NSString, OADTableStyle, NSArray;

@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {
    OADTableStyle *mStyle;
    BOOL mRightToLeft;
    BOOL mFirstRow;
    BOOL mFirstColumn;
    BOOL mLastRow;
    BOOL mLastColumn;
    BOOL mBandRow;
    BOOL mBandColumn;
    NSArray *mEffects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultProperties;

- (id)style;
- (id)initWithDefaults;
- (id)effects;
- (BOOL)hasEffects;
- (void)setStyle:(id)a0;
- (void).cxx_destruct;
- (BOOL)rightToLeft;
- (BOOL)bandRow;
- (BOOL)lastRow;
- (BOOL)firstColumn;
- (void)setEffects:(id)a0;
- (void)setFirstColumn:(BOOL)a0;
- (void)setFirstRow:(BOOL)a0;
- (void)setLastColumn:(BOOL)a0;
- (void)setLastRow:(BOOL)a0;
- (void)setBandColumn:(BOOL)a0;
- (void)setBandRow:(BOOL)a0;
- (void)setRightToLeft:(BOOL)a0;
- (BOOL)bandColumn;
- (BOOL)firstRow;
- (BOOL)lastColumn;
- (BOOL)hasBandsNormalToDir:(int)a0;
- (BOOL)hasVectorNormalToDir:(int)a0 atExtremePos:(int)a1;

@end
