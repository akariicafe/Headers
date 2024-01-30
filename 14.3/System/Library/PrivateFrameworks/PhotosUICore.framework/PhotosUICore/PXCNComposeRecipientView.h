@class NSString, CNComposeRecipientTextView, NSMutableArray;

@interface PXCNComposeRecipientView : PXComposeRecipientView <CNComposeRecipientTextViewDelegate> {
    CNComposeRecipientTextView *_recipientTextView;
    struct CGSize { double width; double height; } _preferredSize;
    NSMutableArray *_internalRecipients;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)addRecipient:(id)a0;
- (id)recipients;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void)removeRecipient:(id)a0;
- (void).cxx_destruct;
- (void)setSeparatorHidden:(BOOL)a0;
- (id)text;
- (void)setLabel:(id)a0;
- (void)layoutSubviews;
- (void)setMaxRecipients:(long long)a0;
- (long long)maxRecipients;
- (void)removeRecipients:(id)a0;
- (id)addButton;
- (id)label;
- (void)composeRecipientView:(id)a0 didFinishEnteringAddress:(id)a1;
- (id)composeRecipientView:(id)a0 composeRecipientForAddress:(id)a1;
- (void)composeHeaderView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (void)composeRecipientView:(id)a0 didAddRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 didRemoveRecipient:(id)a1;
- (void)composeRecipientView:(id)a0 textDidChange:(id)a1;
- (void)composeRecipientViewRequestAddRecipient:(id)a0;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)a0;
- (void)composeRecipientView:(id)a0 disambiguateRecipientForAtom:(id)a1;
- (void)setText:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)addRecipients:(id)a0;

@end
