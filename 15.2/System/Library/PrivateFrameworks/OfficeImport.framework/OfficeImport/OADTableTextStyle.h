@class OADColor, OADFontReference;

@interface OADTableTextStyle : NSObject {
    OADFontReference *mFontReference;
    OADColor *mColor;
    int mBold;
    int mItalic;
}

+ (id)defaultStyle;
+ (id)defaultColor;
+ (id)defaultFontReference;
+ (int)defaultBold;
+ (int)defaultItalic;

- (int)bold;
- (id)shallowCopy;
- (id)description;
- (id)color;
- (void).cxx_destruct;
- (id)init;
- (void)setBold:(int)a0;
- (void)setColor:(id)a0;
- (int)italic;
- (void)setFontReference:(id)a0;
- (void)setItalic:(int)a0;
- (id)fontReference;
- (void)applyOverridesFrom:(id)a0;

@end
