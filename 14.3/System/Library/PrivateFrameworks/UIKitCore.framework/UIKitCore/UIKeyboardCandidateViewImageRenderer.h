@class NSCache, UIView;

@interface UIKeyboardCandidateViewImageRenderer : NSObject

@property (retain, nonatomic) NSCache *imageCache;
@property (weak, nonatomic) UIView *viewForTraitCollection;

+ (id)sharedImageRenderer;

- (id)pocketShadowImageForDarkKeyboard:(BOOL)a0 fadesToBottom:(BOOL)a1 drawShadow:(BOOL)a2 topPadding:(double)a3 bottomPadding:(double)a4 height:(double)a5;
- (id)init;
- (void).cxx_destruct;
- (id)highlightedBarCellBackgroundImageWithColor:(id)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)handwritingCellBackgroundImageForDarkKeyboard:(BOOL)a0 highlighted:(BOOL)a1;
- (id)extensionMaskImage;

@end
