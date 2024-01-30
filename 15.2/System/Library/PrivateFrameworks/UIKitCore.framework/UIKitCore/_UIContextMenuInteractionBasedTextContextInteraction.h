@class UIContextMenuInteraction, NSString;

@interface _UIContextMenuInteractionBasedTextContextInteraction : _UITextContextMenuInteractionBase <UIContextMenuInteractionDelegate>

@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)init;

@end
