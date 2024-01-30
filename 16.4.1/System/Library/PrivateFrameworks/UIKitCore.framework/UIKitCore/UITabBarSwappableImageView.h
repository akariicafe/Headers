@class UIImage;

@interface UITabBarSwappableImageView : UIImageView {
    UIImage *_value;
    UIImage *_alternate;
    UIImage *_landscapeValue;
    UIImage *_landscapeAlternate;
    BOOL _showAlternate;
    BOOL _showLandscape;
}

- (id)_unselectedImage;
- (void)setLandscape:(BOOL)a0;
- (id)_selectedImage;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setCurrentImage;
- (void)showAlternateImage:(BOOL)a0;
- (void)setImage:(id)a0;
- (void)setAlternateImage:(id)a0;
- (id)_selectedCompactImage;
- (id)initWithImage:(id)a0 alternateImage:(id)a1 landscapeImage:(id)a2 landscapeAlternateImage:(id)a3;
- (void).cxx_destruct;
- (id)_unselectedCompactImage;

@end
