@interface FxParameterColor : FxPinParameter {
    struct FxParameterColorPriv { BOOL x0; } *_colorPriv;
}

- (void)dealloc;
- (id)init;
- (BOOL)hasAlpha;
- (void)setHasAlpha:(BOOL)a0;

@end
