@class ICAttachment, UIColor, NSRegularExpression, ICTextAttachment;

@interface ICBaseAttachmentView : UIView

@property (retain, nonatomic) ICAttachment *attachment;
@property (weak, nonatomic) ICTextAttachment *textAttachment;
@property (nonatomic) BOOL selected;
@property (nonatomic) struct CGSize { double width; double height; } attachmentContentSize;
@property (nonatomic) double foregroundAlpha;
@property (copy, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex;

- (void)contentSizeCategoryDidChange;
- (void)updateHighlights;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)cancelDidScrollIntoVisibleRange;
- (void)addKVObserversForAttachment:(id)a0;
- (void)attachmentDidChangeSize:(id)a0;
- (void)attachmentDidLoad:(id)a0;
- (void)attachmentPreviewImagesDidUpdate:(id)a0;
- (void)attachmentWillBeDeleted:(id)a0;
- (void)didChangeAttachment;
- (void)didChangeAttachmentTitle;
- (void)didChangeMedia;
- (void)didChangeMergeableData;
- (void)didChangeSize;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (void)didUpdatePreviewImages;
- (void)mediaDidLoad:(id)a0;
- (id)quickLookTransitionView;
- (void)removeKVOObserversForAttachment:(id)a0;
- (void)willChangeAttachment;
- (void)willDeleteAttachment;

@end
