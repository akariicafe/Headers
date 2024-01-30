@class ODIState;

@interface ODILinear : NSObject {
    BOOL mIsHorizontal;
    BOOL mWithConnectors;
    BOOL mStretch;
    float mPointHeight;
    float mConnectorWidth;
    float mPadding;
    BOOL mIsTextCenteredHorizontally;
    BOOL mIsTextCenteredVertically;
    unsigned int mMaxPointCount;
    ODIState *mState;
}

+ (BOOL)mapIdentifier:(id)a0 state:(id)a1;
+ (void)mapUnknownWithState:(id)a0;

- (void)map;
- (id)initWithState:(id)a0;
- (void)setPadding:(float)a0;
- (void).cxx_destruct;
- (void)setPointHeight:(float)a0;
- (void)setIsHorizontal:(BOOL)a0;
- (void)setMaxPointCount:(unsigned int)a0;
- (void)setWithConnectors:(BOOL)a0;
- (void)setStretch:(BOOL)a0;
- (void)setConnectorWidth:(float)a0;
- (void)setIsTextCentered:(BOOL)a0;
- (void)setIsTextCenteredHorizontally:(BOOL)a0;
- (void)setIsTextCenteredVertically:(BOOL)a0;
- (void)setLogicalBounds;
- (void)mapPoint:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)mapTransition:(id)a0 pointBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)nextPointBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)mapStyleFromPoint:(id)a0 shape:(id)a1;
- (void)mapStyleFromTransition:(id)a0 shape:(id)a1;

@end
