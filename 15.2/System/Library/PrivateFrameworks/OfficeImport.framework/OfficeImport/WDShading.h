@class OITSUColor;

@interface WDShading : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mForegroundColor;
    OITSUColor *mBackgroundColor;
}

+ (id)autoForegroundColor;
+ (id)autoBackgroundColor;
+ (id)nilShading;

- (id)foreground;
- (int)style;
- (void)setForeground:(id)a0;
- (void)setBackground:(id)a0;
- (id)description;
- (id)background;
- (void)setStyle:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)setShading:(id)a0;
- (BOOL)isEqualToShading:(id)a0;

@end
