@class OITSUColor;

@interface WDBorder : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    BOOL mShadow;
    BOOL mFrame;
}

- (BOOL)shadow;
- (unsigned char)space;
- (unsigned char)width;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)style;
- (unsigned long long)hash;
- (id)color;
- (id)description;
- (void)setColor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setWidth:(unsigned char)a0;
- (void)setShadow:(BOOL)a0;
- (BOOL)frame;
- (void)setBorder:(id)a0;
- (void)setStyle:(int)a0;
- (void)setFrame:(BOOL)a0;
- (void)setSpace:(unsigned char)a0;
- (BOOL)isEqualToBorder:(id)a0;
- (void)setNullBorder;
- (void)setSingleBlackBorder;

@end
