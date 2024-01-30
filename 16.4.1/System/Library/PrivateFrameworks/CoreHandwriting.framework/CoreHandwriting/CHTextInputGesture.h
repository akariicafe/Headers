@class CHTokenizedTextResult, CHTextInputTargetContentInfo, NSLocale, CHDrawing;
@protocol CHStroke;

@interface CHTextInputGesture : NSObject

@property (retain, nonatomic) CHTokenizedTextResult *_textResult;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } _storedAffectedRange;
@property (nonatomic) long long gestureType;
@property (readonly, nonatomic) CHTextInputTargetContentInfo *targetContentInfo;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) CHDrawing *normalizedDrawing;
@property (readonly, nonatomic) CHDrawing *originalDrawing;
@property (readonly, nonatomic) BOOL preferCharacterLevel;
@property (readonly, nonatomic) id<CHStroke> lastStroke;

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_affectedRangeByRefiningShapeBasedGesture:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 resultType:(long long)a1 drawing:(id)a2 targetContentInfo:(id)a3;
+ (long long)_cursorPositionForPoint:(struct CGPoint { double x0; double x1; })a0 referenceString:(id)a1 referenceCharRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 searchingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
+ (BOOL)_isShapeBasedRangeRefinementSupportedForResultType:(long long)a0;
+ (void)_shouldExpandToFullTokensForScriptInString:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 shouldExpandStart:(BOOL *)a2 shouldExpandEnd:(BOOL *)a3;
+ (BOOL)isDrawingCenterOnBlank:(id)a0 targetContentInfo:(id)a1 insertionLocation:(long long *)a2;
+ (BOOL)isEditGestureForDrawing:(id)a0 targetContentInfo:(id)a1 tentativeResultType:(long long)a2;
+ (BOOL)isVerticalBarShapeFromLineResult:(id)a0 originalDrawing:(id)a1 isDirectionDownward:(BOOL *)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfTokenAtCharacterIndex:(long long)a0 inString:(id)a1 locale:(id)a2;
+ (BOOL)shouldReclassifyGestureType:(long long)a0;
+ (id)verticalBarGestureFromLineResult:(id)a0 currentGesture:(id)a1;

- (void).cxx_destruct;
- (id)textResult;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_affectedRangeByTrimmingSpaces:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_affectedRangeByAdjustingForProtectedCharacters:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_affectedRangeByAdjustingToTokensIfNeeded:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 allowSubtoken:(BOOL)a1 didExpand:(BOOL *)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_affectedRangeByRemovingTerminatingNewLines:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)getAffectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 expandedToFullTokens:(BOOL *)a1;
- (id)initWithGestureType:(long long)a0 targetContentInfo:(id)a1 locale:(id)a2 normalizedDrawing:(id)a3 originalDrawing:(id)a4 lastStroke:(id)a5 preferCharacterLevel:(BOOL)a6;

@end
