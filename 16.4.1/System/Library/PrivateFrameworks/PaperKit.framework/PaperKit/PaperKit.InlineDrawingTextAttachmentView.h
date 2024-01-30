@interface PaperKit.InlineDrawingTextAttachmentView : PKTextAttachmentDrawingView <UIDropInteractionDelegate_Private> {
    void /* unknown type, empty encoding */ dropInteraction;
    void /* unknown type, empty encoding */ dropSessionType;
    void /* unknown type, empty encoding */ $__lazy_storage_$_acceptedDropLayouts;
}

- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (id)initWithCoder:(id)a0;
- (long long)_dropInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (void)didMoveToWindow;
- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0 drawingClass:(Class)a1 inserted:(BOOL)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 drawing:(id)a1;

@end
