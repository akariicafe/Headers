@interface FxParameterGroup : FxPinParameter {
    struct FxParameterGroupPriv { id x0; } *_groupPriv;
}

- (void)dealloc;
- (id)init;
- (id)subPins;
- (void)setSubPins:(id)a0;

@end
