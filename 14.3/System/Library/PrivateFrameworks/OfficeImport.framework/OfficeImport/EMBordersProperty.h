@class OITSUColor;

@interface EMBordersProperty : CMProperty <NSCopying> {
    OITSUColor *mBorderColor;
    OITSUColor *mBorderTopColor;
    OITSUColor *mBorderLeftColor;
    OITSUColor *mBorderBottomColor;
    OITSUColor *mBorderRightColor;
    int mBorderStyle[5];
    int mBorderWidth[5];
}

- (id)borderColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)styleString;
- (id)colorString;
- (int *)borderWidths;
- (id)cssStringForName:(id)a0;
- (id)initWithOADStroke:(id)a0;
- (id)cssString;
- (id)widthString;
- (id)stringFromStyleEnum:(int)a0;
- (id)stringFromWidthEnum:(int)a0;
- (id)stringFromColor:(id)a0;
- (BOOL)isNoneAtLocation:(int)a0;
- (void)setNoneAtLocation:(int)a0;
- (BOOL)hasSameColorsAs:(id)a0;
- (BOOL)hasSameStylesAs:(id)a0;
- (BOOL)hasSameWidthsAs:(id)a0;
- (void)setBorderStyleAndWidth:(int)a0 location:(unsigned int)a1;
- (id)initWithEDBorders:(id)a0;
- (int *)borderStyles;
- (id)styleHashNumber;
- (id)widthHashNumber;

@end
