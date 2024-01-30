@class OADColor;

@interface OADGradientFillStop : NSObject <NSCopying> {
    OADColor *mColor;
    float mPosition;
}

+ (void)addStopWithColor:(id)a0 position:(float)a1 toArray:(id)a2;

- (id)color;
- (float)position;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0 position:(float)a1;
- (void)setStyleColor:(id)a0;
- (BOOL)usesPlaceholderColor;

@end
