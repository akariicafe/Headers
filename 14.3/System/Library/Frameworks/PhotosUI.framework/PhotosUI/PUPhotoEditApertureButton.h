@interface PUPhotoEditApertureButton : CEKApertureButton

+ (BOOL)_cursorInteractionEnabled;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pointerRect;

@end
