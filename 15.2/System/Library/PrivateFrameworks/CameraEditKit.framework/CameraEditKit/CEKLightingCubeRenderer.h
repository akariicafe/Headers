@class CEKLightingCubeAppearance, CEKLightingCube;

@interface CEKLightingCubeRenderer : NSObject {
    CEKLightingCube *_cube;
    CEKLightingCubeAppearance *_appearance;
    long long _components;
}

- (void).cxx_destruct;
- (id)initWithCube:(id)a0 appearance:(id)a1 components:(long long)a2;
- (void)renderInContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 cornerRadius:(double)a3 stroke:(double)a4;

@end
