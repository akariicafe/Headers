@interface UIWindowSceneGeometryPreferencesMac : UIWindowSceneGeometryPreferences

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } systemFrame;

- (long long)_type;
- (id)init;
- (id)initWithSystemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
