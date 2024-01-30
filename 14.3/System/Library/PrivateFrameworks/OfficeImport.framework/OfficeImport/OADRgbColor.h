@interface OADRgbColor : OADColor {
    float mRed;
    float mGreen;
    float mBlue;
}

+ (id)white;
+ (id)black;
+ (id)rgbColorWithTSUColor:(id)a0;
+ (id)rgbColorWithRedByte:(float)a0 greenByte:(float)a1 blueByte:(float)a2;
+ (id)rgbColorWithRed:(float)a0 green:(float)a1 blue:(float)a2;
+ (id)rgbColorWithWhite:(float)a0;
+ (id)rgbColorWithWhiteByte:(float)a0;

- (float)red;
- (float)blue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (float)green;
- (BOOL)isEqual:(id)a0;
- (id)initWithRed:(float)a0 green:(float)a1 blue:(float)a2;
- (BOOL)isWhite;
- (BOOL)isBlack;
- (unsigned char)redByte;
- (id)initWithRedByte:(float)a0 greenByte:(float)a1 blueByte:(float)a2;
- (unsigned char)greenByte;
- (unsigned char)blueByte;
- (id)initWithWhite:(float)a0;
- (id)initWithWhiteByte:(float)a0;
- (id)rgbColorWithFraction:(float)a0 ofRgbColor:(id)a1;

@end
