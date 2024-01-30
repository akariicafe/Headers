@class OITSUColor;

@interface CMBordersProperty : CMProperty {
    OITSUColor *mBorderColor;
    OITSUColor *mBorderTopColor;
    OITSUColor *mBorderLeftColor;
    OITSUColor *mBorderBottomColor;
    OITSUColor *mBorderRightColor;
    int mBorderStyle[5];
    int mBorderWidth[5];
    int mCustomWidth;
}

+ (BOOL)isStroked:(id)a0;

- (id)colorString;
- (id)styleString;
- (void).cxx_destruct;
- (id)init;
- (void)adjustValues;
- (id)cssStringForName:(id)a0;
- (id)initWithOADStroke:(id)a0;
- (id)cssString;
- (id)widthString;
- (id)stringFromStyleEnum:(int)a0;
- (id)stringFromWidthEnum:(int)a0;
- (id)stringFromColor:(id)a0;
- (BOOL)isNoneAtLocation:(int)a0;
- (void)setNoneAtLocation:(int)a0;
- (void)setFromOadStroke:(id)a0 atLocation:(int)a1 state:(id)a2;

@end
