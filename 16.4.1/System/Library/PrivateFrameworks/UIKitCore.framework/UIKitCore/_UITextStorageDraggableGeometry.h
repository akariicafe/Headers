@class UIColor, NSString, NSTextStorage, UIView;
@protocol UITextDragSupporting;

@interface _UITextStorageDraggableGeometry : NSObject <UITextDraggableGeometry, UITextDraggableGeometryFastSameViewOperationsSupporting> {
    UIColor *_previousBackgroundColor;
}

@property (readonly, weak, nonatomic) UIView<UITextDragSupporting> *view;
@property (readonly, weak, nonatomic) NSTextStorage *textStorage;
@property (nonatomic) long long geometryOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0 textStorage:(id)a1;
- (id /* block */)_targetedPreviewProviderForTextInRange:(id)a0;
- (BOOL)_isActualLink:(id)a0;
- (void)_renderTextInRange:(id)a0 image:(out id *)a1 boundingRectangles:(out id *)a2 forLifting:(BOOL)a3;
- (id /* block */)_previewProviderForTextInRange:(id)a0;
- (id /* block */)_targetedPreviewProviderForTextInRange:(id)a0 dismissing:(BOOL)a1 overrideLifting:(id /* block */)a2;
- (id)attributedStringsForTextRanges:(id)a0;
- (id)textRangeForAttachmentInTextRange:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id /* block */)targetedPreviewProviderForTextInRange:(id)a0 dismissing:(BOOL)a1;
- (id /* block */)_targetedPreviewProviderForImage:(id)a0 inRange:(id)a1;
- (id)previewForDroppingTextInRange:(id)a0 toPosition:(id)a1 inContainerView:(id)a2;
- (id)performSameViewDropOperation:(id)a0;
- (id)_draggableTextInRange:(id)a0;
- (id)textRangesForAttachmentsInTextRange:(id)a0;
- (void).cxx_destruct;
- (id)draggableObjectsForTextRange:(id)a0;

@end
