@class TSDShadow, TSDStroke, NSMutableSet, TSDFill, TSUSparseArray;

@interface TSWPCharacterAdornmentState : NSObject

@property (nonatomic) BOOL hasValidFillState;
@property (retain, nonatomic) TSDFill *currentAdornmentFill;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } currentFillRange;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentFillRect;
@property (retain, nonatomic) TSUSparseArray *currentFillPaths;
@property (retain, nonatomic) TSUSparseArray *currentRubyFillPaths;
@property (retain, nonatomic) TSDShadow *currentFillShadow;
@property (nonatomic) BOOL fillsCurrentTextContainer;
@property (retain, nonatomic) NSMutableSet *currentDropCapAdornments;
@property (nonatomic) BOOL hasValidStrokeState;
@property (retain, nonatomic) TSDStroke *currentAdornmentStroke;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } currentStrokeRange;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentStrokeRect;
@property (retain, nonatomic) TSUSparseArray *currentStrokePaths;
@property (retain, nonatomic) TSUSparseArray *currentRubyStrokePaths;
@property (retain, nonatomic) TSDShadow *currentStrokeShadow;

+ (id)p_deepCopyPathArray:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)resetFillState;
- (void)resetStrokeState;
- (void)setStateWithFill:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 paths:(id)a3 rubyPaths:(id)a4 shadow:(id)a5 fillsCurrentTextContainer:(BOOL)a6;
- (void)setStateWithStroke:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 paths:(id)a3 rubyPaths:(id)a4 shadow:(id)a5;

@end
