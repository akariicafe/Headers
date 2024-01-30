@class UIImage;

@interface UITabBarSwappableImageView : UIImageView {
    UIImage *_value;
    UIImage *_alternate;
    UIImage *_landscapeValue;
    UIImage *_landscapeAlternate;
    BOOL _showAlternate;
    BOOL _showLandscape;
}

- (void)setLandscape:(BOOL)a0;
- (void)setAlternateImage:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)showAlternateImage:(BOOL)a0;
- (id)initWithImage:(id)a0 alternateImage:(id)a1 landscapeImage:(id)a2 landscapeAlternateImage:(id)a3;
- (id)_unselectedCompactImage;
- (id)_unselectedImage;
- (void).cxx_destruct;
- (id)_selectedCompactImage;
- (id)_selectedImage;
- (void)setCurrentImage;
- (void)didMoveToWindow;
- (void)setImage:(id)a0;

@end
