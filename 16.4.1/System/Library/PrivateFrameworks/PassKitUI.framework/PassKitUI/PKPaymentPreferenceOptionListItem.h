@interface PKPaymentPreferenceOptionListItem : PKPaymentPreferenceListItem {
    id /* block */ _hasErrorHandler;
}

@property (readonly, nonatomic) id preference;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)configuration;
- (id)_placeholderText;
- (void).cxx_destruct;
- (id)_internalConfiguration;
- (id)_text;
- (id)_image;
- (id)_secondaryText;
- (id)_inlineEditingConfiguration;
- (BOOL)_supportsDeleteAction;
- (BOOL)_supportsEditAction;
- (BOOL)_supportsEditing;
- (id)initWithPreference:(id)a0 inSectionPreference:(id)a1 hasErrorHandler:(id /* block */)a2;
- (BOOL)supportsSwipeActionType:(int)a0;

@end
