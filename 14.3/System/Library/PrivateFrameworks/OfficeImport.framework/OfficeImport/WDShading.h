@class OITSUColor;

@interface WDShading : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mForegroundColor;
    OITSUColor *mBackgroundColor;
}

+ (id)autoForegroundColor;
+ (id)autoBackgroundColor;
+ (id)nilShading;

- (id)background;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)style;
- (unsigned long long)hash;
- (id)description;
- (void)setBackground:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setForeground:(id)a0;
- (id)foreground;
- (void)setStyle:(int)a0;
- (void)setShading:(id)a0;
- (BOOL)isEqualToShading:(id)a0;

@end
