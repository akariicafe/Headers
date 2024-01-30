@class UIColor, UIImage, NSMutableDictionary;

@interface UIKeyboardBIUImageGenerator : NSObject {
    BOOL _useButtonShapes;
    UIImage *_biuBoldImage;
    UIImage *_biuItalicImage;
    UIImage *_biuUnderlineImage;
    NSMutableDictionary *_imageCache;
}

@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *normalColor;

- (void)_invalidateCache;
- (void).cxx_destruct;
- (id)init;
- (void)_drawBIUAtSize:(struct CGSize { double x0; double x1; })a0 bold:(BOOL)a1 italic:(BOOL)a2 underline:(BOOL)a3;
- (id)BIUImageForBold:(BOOL)a0 italic:(BOOL)a1 underline:(BOOL)a2;
- (void)_accessibilitySettingsChanged:(id)a0;

@end
