@class NSString, WKContentView;

@interface WKSelectPicker : NSObject <WKFormControl, UIContextMenuInteractionDelegate> {
    WKContentView *_view;
    struct CGPoint { double x; double y; } _interactionPoint;
    struct RetainPtr<UIMenu> { void *m_ptr; } _selectMenu;
    struct RetainPtr<UIContextMenuInteraction> { void *m_ptr; } _selectContextMenuInteraction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)selectFormAccessoryHasCheckedItemAtRow:(long long)a0;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (id).cxx_construct;
- (id)initWithView:(id)a0;
- (void)dealloc;
- (id)controlView;
- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 highlightPreviewForItemWithIdentifier:(id)a2;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)actionForOptionIndex:(long long)a0;
- (id)actionForOptionItem:(const void *)a0 withIndex:(long long)a1;
- (id)createMenu;
- (void)didSelectOptionIndex:(long long)a0;
- (void)ensureContextMenuInteraction;
- (void)removeContextMenuInteraction;
- (void)selectRow:(long long)a0 inComponent:(long long)a1 extendingSelection:(BOOL)a2;
- (void)showSelectPicker;

@end
