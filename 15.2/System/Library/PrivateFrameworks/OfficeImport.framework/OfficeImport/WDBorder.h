@class OITSUColor;

@interface WDBorder : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mColor;
    unsigned char mWidth;
    unsigned char mSpace;
    BOOL mShadow;
    BOOL mFrame;
}

- (unsigned char)space;
- (int)style;
- (BOOL)frame;
- (void)setBorder:(id)a0;
- (void)setFrame:(BOOL)a0;
- (void)setShadow:(BOOL)a0;
- (void)setWidth:(unsigned char)a0;
- (id)description;
- (id)color;
- (unsigned char)width;
- (void)setStyle:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shadow;
- (unsigned long long)hash;
- (void)setColor:(id)a0;
- (void)setSpace:(unsigned char)a0;
- (BOOL)isEqualToBorder:(id)a0;
- (void)setNullBorder;
- (void)setSingleBlackBorder;

@end
