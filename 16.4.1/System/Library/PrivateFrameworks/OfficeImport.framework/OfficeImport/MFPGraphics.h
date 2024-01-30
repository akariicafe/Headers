@class NSMutableDictionary, MFPGraphicsState, NSMutableArray, MFPObjectTable;

@interface MFPGraphics : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCanvas;
    int mHorzDpi;
    int mVertDpi;
    MFPGraphicsState *mCurrentState;
    NSMutableArray *mStateStack;
    MFPObjectTable *mObjectTable;
    NSMutableDictionary *mAvailableFonts;
}

+ (float)unitsPerInch:(int)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })canvas;
- (id)currentState;
- (void).cxx_destruct;
- (id)initWithCanvas:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)strokePath:(id)a0 pen:(id)a1;
- (void)fillPath:(id)a0 brush:(id)a1;
- (BOOL)areThereOpenContainers;
- (void)beginContainerNoParamsWithId:(unsigned int)a0;
- (void)beginContainerWithId:(unsigned int)a0 boundsInParent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 boundsUnit:(int)a3;
- (void)beginContainerWithId:(unsigned int)a0 containerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (id)fontNameForUppercaseFontName:(id)a0;
- (id)objectTable;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })pageTransformWithScale:(float)a0 unit:(int)a1;
- (float)pixelsPerUnit:(int)a0 direction:(int)a1;
- (void)restoreGraphicsStateOrEndContainerWithId:(unsigned int)a0;
- (void)saveGraphicsStateWithId:(unsigned int)a0;
- (void)setHorizontalDpi:(int)a0 verticalDpi:(int)a1;

@end
