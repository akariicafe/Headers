@class TSDDrawableInfo, NSSet, TSDInteractiveCanvasController, TSKSelection, NSString, TSDMultiPaneController;

@interface TSDDrawableEditor : NSObject <TSDEditor> {
    TSDMultiPaneController *mGraphicInspector;
}

@property (readonly, retain, nonatomic) TSDDrawableInfo *info;
@property (readonly, nonatomic) TSDDrawableInfo *firstInfo;
@property (retain, nonatomic) NSSet *infos;
@property (readonly, nonatomic) NSSet *layouts;
@property (readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
@property (retain, nonatomic) TSKSelection *selection;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingInfo;
+ (id)keyPathsForValuesAffectingFirstInfo;
+ (BOOL)shouldSuppressMultiselection;
+ (id)keyPathsForValuesAffectingLayouts;

- (void)setStrokeColor:(id)a0;
- (id)stroke;
- (id)documentRoot;
- (id)strokeColor;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)a0;
- (int)canPerformEditorAction:(SEL)a0 withSender:(id)a1;
- (BOOL)canAddOrShowComment;
- (void)setStroke:(id)a0;
- (int)canPerformAction:(SEL)a0;
- (id)infosOfClass:(Class)a0;
- (id)topLevelInspectorAutosaveName;
- (double)strokeWidthForNormalizedWidth:(double)a0;
- (double)pictureFrameAssetScaleForNormalizedWidth:(double)a0;
- (id)selectedLayoutsSupportingRotation;
- (id)selectedLayoutsSupportingFlipping;
- (id)selectedLayoutsSupportingInspectorPositioning;
- (void)setStyleValue:(id)a0 forStyleProperty:(int)a1;
- (void)applyStylePresetWithIndex:(id)a0;
- (void)takePatternFromStroke:(id)a0 withDefaultStroke:(id)a1;
- (void)beginChangingStrokeWidth:(id)a0;
- (void)didChangeStrokeWidth:(id)a0;
- (void)endChangingStrokeWidth:(id)a0;
- (id)strokeSwatches;
- (id)strokeColorPickerTitle;
- (void)stylePresetInspector:(id)a0 didSelectPreset:(id)a1;
- (id)stylePresetKindForInspector;
- (void)presetSelected:(id)a0 sender:(id)a1;
- (id)viewControllerForMoreStyleOptions;
- (id)imageForPreset:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
