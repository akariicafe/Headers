@class UIColor, NSString, UIView, NSLayoutManager;
@protocol UITextDragSupporting, UITextDropSupporting;

@interface UILayoutManagerBasedDraggableGeometry : NSObject <UITextDraggableGeometry, UITextDraggableGeometryFastSameViewOperationsSupporting> {
    UIColor *_previousBackgroundColor;
}

@property (readonly, weak, nonatomic) UIView<UITextDragSupporting, UITextDropSupporting> *view;
@property (readonly, weak, nonatomic) NSLayoutManager *layoutManager;
@property (nonatomic) long long geometryOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGPoint { double x0; double x1; })_textOriginOffsetForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inView:(id)a1;
- (id /* block */)_targetedPreviewProviderForTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textRectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inView:(id)a1;
- (id /* block */)_targetedPreviewProviderForImage:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_draggableTextInRange:(id)a0;
- (id)performSameViewDropOperation:(id)a0;
- (void).cxx_destruct;
- (void)_renderTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 image:(out id *)a1 boundingRectangles:(out id *)a2 forLifting:(BOOL)a3;
- (id)draggableObjectsForTextRange:(id)a0;
- (BOOL)_isActualLink:(id)a0;
- (id /* block */)_previewProviderForTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)textRangeForAttachmentInTextRange:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithView:(id)a0 layoutManager:(id)a1;
- (id)_textStorage;
- (id /* block */)_targetedPreviewProviderForTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 dismissing:(BOOL)a1 overrideLifting:(id /* block */)a2;
- (id)attributedStringsForTextRanges:(id)a0;
- (id /* block */)targetedPreviewProviderForTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 dismissing:(BOOL)a1;
- (id)previewForDroppingTextInRange:(id)a0 toPosition:(id)a1 inContainerView:(id)a2;
- (id)textRangesForAttachmentsInTextRange:(id)a0;

@end
