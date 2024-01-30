@interface PKPaymentPreferenceOptionListItem : PKPaymentPreferenceListItem {
    id /* block */ _hasErrorHandler;
}

@property (readonly, nonatomic) id preference;

- (id)_text;
- (id)_image;
- (id)configuration;
- (void).cxx_destruct;
- (id)_secondaryText;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_internalConfiguration;
- (id)_placeholderText;
- (BOOL)supportsSwipeActionType:(int)a0;
- (id)initWithPreference:(id)a0 inSectionPreference:(id)a1 hasErrorHandler:(id /* block */)a2;
- (id)_inlineEditingConfiguration;
- (BOOL)_supportsDeleteAction;
- (BOOL)_supportsEditAction;
- (BOOL)_supportsEditing;

@end
