@class CKMessagePartChatItem;
@protocol CKMessageAcknowledgmentPickerBarDelegate;

@interface CKMessageAcknowledgmentPickerBarViewController : UIViewController <CKMessageAcknowledgmentPickerBarItemViewDelegate>

@property (weak, nonatomic) id<CKMessageAcknowledgmentPickerBarDelegate> delegate;
@property (retain, nonatomic) CKMessagePartChatItem *chatItem;

- (void).cxx_destruct;
- (id)initWithChatItem:(id)a0;
- (void)loadView;
- (void)adjustTailRelativeSiblingViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pickerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)performShowAnimation:(id /* block */)a0;
- (void)performSendAnimation:(id /* block */)a0;
- (void)performCancelAnimation:(id /* block */)a0;
- (void)adjustTailRelativeSiblingViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateFrameRelativeToSiblingViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withinBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)pickerBarItemViewSelectionDidChange:(id)a0;
- (id)pickerView;

@end
