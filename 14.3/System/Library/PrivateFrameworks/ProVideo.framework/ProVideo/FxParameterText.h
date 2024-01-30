@interface FxParameterText : FxPinParameter {
    struct FxParameterTextPriv { BOOL x0; } *_textPriv;
}

- (id)init;
- (void)dealloc;
- (BOOL)allowsReturns;
- (void)setAllowsReturns:(BOOL)a0;

@end
