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

- (BOOL)isWhite;
- (float)red;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)green;
- (unsigned long long)hash;
- (id)initWithRed:(float)a0 green:(float)a1 blue:(float)a2;
- (unsigned char)redByte;
- (BOOL)isBlack;
- (float)blue;
- (id)initWithRedByte:(float)a0 greenByte:(float)a1 blueByte:(float)a2;
- (unsigned char)greenByte;
- (unsigned char)blueByte;
- (id)initWithWhite:(float)a0;
- (id)initWithWhiteByte:(float)a0;
- (id)rgbColorWithFraction:(float)a0 ofRgbColor:(id)a1;

@end
