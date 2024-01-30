@interface FxParameterListSelection : FxPinParameter {
    struct FxParameterListSelectionPriv { int x0; id x1; } *_listSelectionPriv;
}

- (void)dealloc;
- (id)init;
- (id)listItems;
- (void)setListItems:(id)a0;
- (id)displayNameForValue:(id)a0;
- (int)preferredListVariant;
- (void)setPreferredListVariant:(int)a0;

@end
