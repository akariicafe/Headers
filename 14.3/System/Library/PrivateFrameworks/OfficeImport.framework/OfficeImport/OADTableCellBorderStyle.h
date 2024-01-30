@class OADStroke;

@interface OADTableCellBorderStyle : NSObject {
    OADStroke *mLeftStroke;
    OADStroke *mRightStroke;
    OADStroke *mTopStroke;
    OADStroke *mBottomStroke;
    OADStroke *mHorzInsideStroke;
    OADStroke *mVertInsideStroke;
    OADStroke *mTopLeftToBottomRightStroke;
    OADStroke *mBottomLeftToTopRightStroke;
}

+ (id)defaultStyle;
+ (id)defaultAxisParallelStroke;
+ (id)defaultObliqueStroke;

- (void).cxx_destruct;
- (id)description;
- (id)stroke:(int)a0;
- (id)shallowCopy;
- (id)topStroke;
- (id)horzInsideStroke;
- (id)bottomStroke;
- (id)leftStroke;
- (id)vertInsideStroke;
- (id)rightStroke;
- (void)setLeftStroke:(id)a0;
- (void)setRightStroke:(id)a0;
- (void)setTopStroke:(id)a0;
- (void)setBottomStroke:(id)a0;
- (void)setHorzInsideStroke:(id)a0;
- (void)setVertInsideStroke:(id)a0;
- (void)setTopLeftToBottomRightStroke:(id)a0;
- (void)setBottomLeftToTopRightStroke:(id)a0;
- (id)topLeftToBottomRightStroke;
- (id)bottomLeftToTopRightStroke;
- (void)setStrokeOfType:(int)a0 toValue:(id)a1;
- (void)applyOverridesFrom:(id)a0;

@end
