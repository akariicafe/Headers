@class UIColor, UIFont;

@interface StocksStyle : NSObject {
    UIColor *_chartHighlightColor;
    UIFont *_mainFont;
    UIFont *_chartLabelFont;
}

+ (id)sharedStyle;

- (void)resetLocale;
- (id)init;
- (void).cxx_destruct;
- (id)fontOfSize:(double)a0;
- (id)lightFontOfSize:(double)a0;
- (id)lossColor;
- (id)gainColor;
- (id)chartHighlightColor;
- (id)boldFontOfSize:(double)a0;
- (id)mediumFontOfSize:(double)a0;

@end
