@interface PUImageTileViewControllerAccessibility : __PUImageTileViewControllerAccessibility_super <AXFullScreenTileControllerDelegate>

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)assetDidChange;
- (void)dealloc;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axApplyAssetToView;
- (id)_axImageView;
- (id)_axMainImageView;
- (BOOL)findFaceLandmarks;
- (void)_axApplyCustomAction:(id)a0;
- (void)addLandmarksForFace:(id)a0 withName:(id)a1 toArray:(id)a2;
- (void)_setAXFaces:(id)a0;
- (BOOL)removeLandmarks;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })modifyRectToDisplayedScale:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)elementForLandmark:(unsigned long long)a0 fromLandmarks:(id)a1 inFaceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 cancelAction:(id)a3 container:(id)a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForValuePoints:(id)a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPoint { double x0; double x1; })modifiedPointForValue:(id)a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_axGetFaces;
- (BOOL)_axConformsToFullScreenTileControllerDelegate;
- (void)_axApplyLandmarkCustomAction;
- (void)_axResetLandmarks;

@end
