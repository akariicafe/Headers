@interface ICTextAttachmentViewProvider : NSTextAttachmentViewProvider

- (void)loadView;
- (BOOL)tracksTextAttachmentViewBounds;

@end
