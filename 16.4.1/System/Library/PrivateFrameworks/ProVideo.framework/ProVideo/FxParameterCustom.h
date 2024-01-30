@interface FxParameterCustom : FxPinParameter <FxCustomParameterDefinition> {
    struct FxParameterCustomPriv { } *_customPriv;
}

- (void)dealloc;
- (id)init;
- (id)dataFromValue:(id)a0;
- (id)valueFromData:(id)a0;

@end
