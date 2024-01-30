@class UIImageView, CKAttachmentItem;

@interface CKReviewLargeAttachmentsTableViewCell : CKAbstractReviewTableViewCell

@property (retain, nonatomic) UIImageView *previewView;
@property (retain, nonatomic) CKAttachmentItem *attachmentItem;

+ (double)requestedHeight;
+ (struct CGSize { double x0; double x1; })leftHandSideViewSize;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setModelObject:(id)a0;
- (id)leftHandSideView;
- (void)_updateImageViewForAttachmentItem;

@end
