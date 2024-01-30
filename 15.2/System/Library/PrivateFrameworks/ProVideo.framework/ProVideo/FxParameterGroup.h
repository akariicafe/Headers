@interface FxParameterGroup : FxPinParameter {
    struct FxParameterGroupPriv { id x0; } *_groupPriv;
}

- (id)init;
- (void)dealloc;
- (id)subPins;
- (void)setSubPins:(id)a0;

@end
