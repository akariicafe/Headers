@class CIFilter;

@interface PBFilter : NSObject {
    CIFilter *_ciFilter;
    CIFilter *_wrapMirrorFilter;
}

+ (id)defaultValueForKey:(id)a0;
+ (id)filterWithName:(id)a0;
+ (BOOL)needsDisplayForKey:(id)a0;

- (id)localizedName;
- (id)inputKeys;
- (id)description;
- (void)setDefaults;
- (id)init;
- (id)name;
- (void)dealloc;
- (id)ciFilterName;
- (BOOL)needsWrapMirror;
- (void)applyParametersToCIFilter:(BOOL)a0 extent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)createOutputImage:(id)a0 mirrored:(BOOL)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)resetInputImage;
- (id)ciFilter;
- (BOOL)allowAbsoluteGestures;
- (id)_presentationName;
- (void)renderWithContext:(id)a0 inputSize:(struct CGSize { double x0; double x1; })a1 outputRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 mirrored:(BOOL)a3;
- (struct CGPoint { double x0; double x1; })pointValueForKeyIfSupported:(id)a0;
- (float)floatValueForKeyIfSupported:(id)a0;
- (void)setPointValue:(struct CGPoint { double x0; double x1; })a0 forKeyIfSupported:(id)a1;
- (void)setFloatValue:(float)a0 forKeyIfSupported:(id)a1;
- (void)handleTapGesture:(struct CGPoint { double x0; double x1; })a0 viewSize:(struct CGSize { double x0; double x1; })a1 mirror:(BOOL)a2;
- (void)handleGestureAtLocations:(struct CGPoint { double x0; double x1; } *)a0 count:(int)a1 translation:(struct CGPoint { double x0; double x1; })a2 viewSize:(struct CGSize { double x0; double x1; })a3 stateBegan:(BOOL)a4 mirror:(BOOL)a5;
- (void)handlePanGesture:(struct CGPoint { double x0; double x1; })a0 viewSize:(struct CGSize { double x0; double x1; })a1 stateBegan:(BOOL)a2 mirror:(BOOL)a3;
- (void)handlePinchGesture:(float)a0 stateBegan:(BOOL)a1;
- (void)handleRotateGesture:(float)a0 stateBegan:(BOOL)a1 mirror:(BOOL)a2;

@end
