@class ICTextAttachment, ICAttachment, NSRegularExpression;

@interface ICBaseAttachmentView : UIView

@property (weak, nonatomic) ICAttachment *attachment;
@property (weak, nonatomic) ICTextAttachment *textAttachment;
@property (nonatomic) BOOL selected;
@property (nonatomic) struct CGSize { double width; double height; } attachmentContentSize;
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex;

- (void)contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)attachmentPreviewImagesDidUpdate:(id)a0;
- (id)quickLookTransitionView;
- (void)attachmentDidLoad:(id)a0;
- (void)attachmentWillBeDeleted:(id)a0;
- (void)mediaDidLoad:(id)a0;
- (void)removeKVOObserversForAttachment:(id)a0;
- (void)addKVObserversForAttachment:(id)a0;
- (void)willChangeAttachment;
- (void)didChangeAttachment;
- (void)didChangeMedia;
- (void)didChangeMergeableData;
- (void)didChangeAttachmentTitle;
- (void)didSetSelected:(BOOL)a0;
- (void)didUpdatePreviewImages;
- (void)willDeleteAttachment;
- (void)didChangeSize;
- (void)didScrollOutOfVisibleRange;
- (void)didScrollIntoVisibleRange;
- (BOOL)cancelDidScrollIntoVisibleRange;

@end
