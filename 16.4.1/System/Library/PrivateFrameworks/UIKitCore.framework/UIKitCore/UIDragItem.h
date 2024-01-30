@class _UIDragPreviewBlockProvider, UITargetedDragPreview, NSItemProvider, UITextRange;
@protocol _UIDragDropSessionInternal, _UIDragSetDownAnimationTarget;

@interface UIDragItem : NSObject

@property (retain, nonatomic, setter=_setDraggedTextRange:) UITextRange *_draggedTextRange;
@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) _UIDragPreviewBlockProvider *dragPreviewBlockProvider;
@property (nonatomic) unsigned long long preferredPreviewType;
@property (nonatomic) unsigned long long updatedPreviewType;
@property (weak, nonatomic, getter=_dragDropSession, setter=_setDragDropSession:) id<_UIDragDropSessionInternal> dragDropSession;
@property (retain, nonatomic, getter=_targetedLiftPreview) UITargetedDragPreview *targetedLiftPreview;
@property (nonatomic, getter=_visibleDropItemSize, setter=_setVisibleDropItemSize:) struct CGSize { double width; double height; } visibleDropItemSize;
@property (weak, nonatomic, getter=_sourceVisualTarget, setter=_setSourceVisualTarget:) id<_UIDragSetDownAnimationTarget> sourceVisualTarget;
@property (weak, nonatomic, getter=_destinationVisualTarget, setter=_setDestinationVisualTarget:) id<_UIDragSetDownAnimationTarget> destinationVisualTarget;
@property (nonatomic, getter=_isDirty, setter=_setDirty:) BOOL dirty;
@property (nonatomic, getter=_deferPreviewUpdates, setter=_setDeferPreviewUpdates:) BOOL deferPreviewUpdates;
@property (retain, nonatomic, getter=_privateLocalContext, setter=_setPrivateLocalContext:) id privateLocalContext;
@property (nonatomic) unsigned long long _managementState;
@property (retain, nonatomic) id localObject;
@property (copy, nonatomic) id /* block */ previewProvider;

- (void).cxx_destruct;
- (id)_chiclet;
- (id)_currentPreviewProvider;
- (void)_loadOriginalImageComponentProvider;
- (void)_previewNeedsUpdateForType:(unsigned long long)a0;
- (id)_previewProviderForType:(unsigned long long)a0;
- (id)_uicmi_getAssociatedMenuIdentifier;
- (void)_uicmi_setAssociatedMenuIdentifier:(id)a0;
- (void)_updatePreferredPreview;
- (id)initWithItemProvider:(id)a0;

@end
