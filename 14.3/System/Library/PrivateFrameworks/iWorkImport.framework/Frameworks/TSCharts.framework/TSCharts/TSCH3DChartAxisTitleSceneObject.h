@interface TSCH3DChartAxisTitleSceneObject : TSCH3DChartTitleSceneObject

+ (unsigned long long)styleIndexForInfo:(id)a0;
+ (id)paragraphStyleForTitleFontForInfo:(id)a0;

- (id)selectionPathForInfo:(id)a0 scene:(id)a1 pickedPoint:(id)a2;
- (id)convertSelectionPathTo3D:(id)a0 path:(id)a1;
- (BOOL)canRenderSelectionPath:(id)a0 forInfo:(id)a1;
- (BOOL)canEditTextForSelectionPath:(id)a0 forInfo:(id)a1;
- (BOOL)enabledForInfo:(id)a0;
- (struct LabelTransform { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; } x1; unsigned int x2; float x3; BOOL x4; })labelTransformForPositioner:(id)a0;
- (id)textForInfo:(id)a0;

@end
