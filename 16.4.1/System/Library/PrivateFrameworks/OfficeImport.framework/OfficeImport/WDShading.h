@class OITSUColor;

@interface WDShading : NSObject <NSCopying> {
    int mStyle;
    OITSUColor *mForegroundColor;
    OITSUColor *mBackgroundColor;
}

+ (id)autoBackgroundColor;
+ (id)autoForegroundColor;
+ (id)nilShading;

- (void)setForeground:(id)a0;
- (void)setBackground:(id)a0;
- (id)foreground;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)background;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (int)style;
- (void).cxx_destruct;
- (void)setStyle:(int)a0;
- (BOOL)isEqualToShading:(id)a0;
- (void)setShading:(id)a0;

@end
