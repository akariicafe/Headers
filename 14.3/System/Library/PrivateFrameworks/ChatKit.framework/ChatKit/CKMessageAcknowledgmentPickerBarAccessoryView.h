@class CKMessageAcknowledgmentPickerBarViewController, CKMessagePartChatItem;

@interface CKMessageAcknowledgmentPickerBarAccessoryView : _UIContextMenuAccessoryView

@property (nonatomic) BOOL visible;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutBounds;
@property (retain, nonatomic) CKMessageAcknowledgmentPickerBarViewController *pickerViewController;
@property (retain, nonatomic) CKMessagePartChatItem *chatItem;

- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })attachmentOffsetWithReferenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithChatItem:(id)a0 layoutBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
