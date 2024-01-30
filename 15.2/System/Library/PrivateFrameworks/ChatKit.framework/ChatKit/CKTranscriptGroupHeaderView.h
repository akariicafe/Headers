@class UIButton, _UIBackdropView, UIView, CNComposeRecipientTextView, CKConversation;

@interface CKTranscriptGroupHeaderView : UIView

@property (retain, nonatomic) CKConversation *conversation;
@property (retain, nonatomic) CNComposeRecipientTextView *textView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) _UIBackdropView *backdropView;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 conversation:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
