@class NSString;

@interface WKDataListSuggestionsDropdown : WKDataListSuggestionsControl <UIContextMenuInteractionDelegate> {
    struct RetainPtr<NSArray<UIMenuElement *>> { void *m_ptr; } _suggestionsMenuElements;
    struct RetainPtr<UIContextMenuInteraction> { void *m_ptr; } _suggestionsContextMenuInteraction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (void)updateWithInformation:(void *)a0;
- (id)initWithInformation:(void *)a0 inView:(id)a1;
- (void)showSuggestionsDropdown:(void *)a0 activationType:(unsigned char)a1;
- (void)didSelectOptionAtIndex:(long long)a0;
- (void)_showSuggestions;
- (void)_displayWithActivationType:(unsigned char)a0;
- (void)_removeContextMenuInteraction;
- (void)invalidate;
- (void)_updateTextSuggestions;
- (void)_updateSuggestionsMenuElements;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_preferredEdgeInsetsForSuggestionsMenu;
- (void)_suggestionsMenuDidPresent;
- (void)_suggestionsMenuDidDismiss;
- (id).cxx_construct;

@end
