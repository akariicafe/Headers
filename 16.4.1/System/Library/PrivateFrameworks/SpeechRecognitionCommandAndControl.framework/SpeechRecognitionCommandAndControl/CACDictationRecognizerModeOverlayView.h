@class UIColor;

@interface CACDictationRecognizerModeOverlayView : UIView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageRect;
    int _dictationRecognizerMode;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundsForLastReload;
@property (nonatomic) BOOL didUpdateItems;
@property (retain, nonatomic) UIColor *tintColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)imageBundle;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addIconContrasted:(BOOL)a0;
- (id)_badgeViewContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingContrast:(BOOL)a1;
- (id)_createInvertedMaskedImage:(id)a0 withColor:(id)a1;
- (id)_imageForCurrentDictiationRecognizerMode;
- (void)_updateOverlayImage;
- (void)setDictationRecognizerMode:(int)a0;
- (void)setImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1;

@end
