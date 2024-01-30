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
- (id)init;
- (void).cxx_destruct;
- (id)color;
- (int)italic;
- (id)description;
- (void)setColor:(id)a0;
- (void)setBold:(int)a0;
- (id)shallowCopy;
- (void)setFontReference:(id)a0;
- (void)setItalic:(int)a0;
- (id)fontReference;
- (void)applyOverridesFrom:(id)a0;

@end
