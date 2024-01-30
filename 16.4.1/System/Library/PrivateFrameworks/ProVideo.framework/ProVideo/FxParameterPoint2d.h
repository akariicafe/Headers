@interface FxParameterPoint2d : FxPinParameter {
    struct FxParameterPoint2dPriv { BOOL x0; BOOL x1; } *_point2dPriv;
}

- (void)dealloc;
- (id)init;
- (BOOL)isTranslation;
- (void)setIsTranslation:(BOOL)a0;
- (BOOL)isCanvasRelative;
- (void)setIsCanvasRelative:(BOOL)a0;

@end
