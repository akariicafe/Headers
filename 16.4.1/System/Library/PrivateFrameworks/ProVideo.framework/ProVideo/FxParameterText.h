@interface FxParameterText : FxPinParameter {
    struct FxParameterTextPriv { BOOL x0; } *_textPriv;
}

- (void)dealloc;
- (id)init;
- (BOOL)allowsReturns;
- (void)setAllowsReturns:(BOOL)a0;

@end
