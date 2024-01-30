@class UIImageView, CKAttachmentItem;

@interface CKReviewLargeAttachmentsTableViewCell : CKAbstractReviewTableViewCell

@property (retain, nonatomic) UIImageView *previewView;
@property (retain, nonatomic) CKAttachmentItem *attachmentItem;

+ (double)requestedHeight;
+ (struct CGSize { double x0; double x1; })leftHandSideViewSize;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)leftHandSideView;
- (void)_updateImageViewForAttachmentItem;
- (void)setModelObject:(id)a0;

@end
