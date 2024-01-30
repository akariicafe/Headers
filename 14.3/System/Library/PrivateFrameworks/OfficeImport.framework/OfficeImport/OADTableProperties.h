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

- (void).cxx_destruct;
- (id)style;
- (BOOL)hasEffects;
- (id)initWithDefaults;
- (id)effects;
- (BOOL)rightToLeft;
- (void)setStyle:(id)a0;
- (BOOL)lastRow;
- (BOOL)bandRow;
- (BOOL)firstColumn;
- (void)setEffects:(id)a0;
- (BOOL)lastColumn;
- (BOOL)firstRow;
- (void)setLastColumn:(BOOL)a0;
- (void)setFirstColumn:(BOOL)a0;
- (void)setFirstRow:(BOOL)a0;
- (void)setLastRow:(BOOL)a0;
- (void)setBandColumn:(BOOL)a0;
- (void)setBandRow:(BOOL)a0;
- (void)setRightToLeft:(BOOL)a0;
- (BOOL)bandColumn;
- (BOOL)hasBandsNormalToDir:(int)a0;
- (BOOL)hasVectorNormalToDir:(int)a0 atExtremePos:(int)a1;

@end
