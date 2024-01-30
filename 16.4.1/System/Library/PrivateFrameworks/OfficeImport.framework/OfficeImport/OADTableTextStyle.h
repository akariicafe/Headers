@class OADColor, OADFontReference;

@interface OADTableTextStyle : NSObject {
    OADFontReference *mFontReference;
    OADColor *mColor;
    int mBold;
    int mItalic;
}

+ (id)defaultStyle;
+ (id)defaultColor;
+ (int)defaultBold;
+ (id)defaultFontReference;
+ (int)defaultItalic;

- (id)color;
- (void)setColor:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (int)bold;
- (void)setBold:(int)a0;
- (id)shallowCopy;
- (int)italic;
- (void)setItalic:(int)a0;
- (void)applyOverridesFrom:(id)a0;
- (id)fontReference;
- (void)setFontReference:(id)a0;

@end
