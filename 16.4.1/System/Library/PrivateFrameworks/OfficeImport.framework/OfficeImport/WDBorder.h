@class OITSUColor;

@interface WDBorder : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    BOOL mShadow;
    BOOL mFrame;
}

- (unsigned char)width;
- (void)setWidth:(unsigned char)a0;
- (BOOL)frame;
- (id)color;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBorder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)shadow;
- (void)setColor:(id)a0;
- (void)setFrame:(BOOL)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (int)style;
- (void).cxx_destruct;
- (void)setStyle:(int)a0;
- (unsigned char)space;
- (void)setShadow:(BOOL)a0;
- (void)setSpace:(unsigned char)a0;
- (BOOL)isEqualToBorder:(id)a0;
- (void)setNullBorder;
- (void)setSingleBlackBorder;

@end
