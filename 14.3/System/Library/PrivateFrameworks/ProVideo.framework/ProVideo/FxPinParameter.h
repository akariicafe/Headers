@interface FxPinParameter : FxPin {
    id defaultValue;
    Class customUI;
    struct FxPinParameterPriv { } *_paramPriv;
}

- (void)setDefaultValue:(id)a0;
- (id)init;
- (id)defaultValue;
- (void)dealloc;
- (Class)customPinControl;
- (void)setCustomPinControl:(Class)a0;

@end
