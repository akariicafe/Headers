@class NSString, ASVInlinePreview;

@interface WKModelView : WKCompositingView <WKNativelyInteractible> {
    struct RetainPtr<ASVInlinePreview> { void *m_ptr; } _preview;
    struct RetainPtr<WKModelInteractionGestureRecognizer> { void *m_ptr; } _modelInteractionGestureRecognizer;
    struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl *m_ptr; } m_impl; } _filePath;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastBounds;
}

@property (readonly, nonatomic) ASVInlinePreview *preview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)createFileForModel:(void *)a0;
- (id)initWithCoder:(id)a0;
- (void)updateBounds;
- (id)initWithModel:(void *)a0;
- (id).cxx_construct;

@end
