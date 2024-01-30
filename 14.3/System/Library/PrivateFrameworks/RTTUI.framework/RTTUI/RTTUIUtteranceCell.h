@class RTTUtterance, NSString, UITextView, CALayer;
@protocol RTTUIUtteranceCellDelegate;

@interface RTTUIUtteranceCell : UITableViewCell <UITextViewDelegate> {
    UITextView *_textView;
    CALayer *_bubbleLayer;
}

@property (nonatomic, getter=_accessibilityIsUnread, setter=_accessibilitySetIsUnread:) BOOL accessibilityIsUnread;
@property (retain, nonatomic) RTTUtterance *utterance;
@property (nonatomic, getter=isEditingUtterance) BOOL editingUtterance;
@property (weak, nonatomic) id<RTTUIUtteranceCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForUtterance:(id)a0 andWidth:(double)a1;

- (void)updateLayout;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedTextRange;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)_accessibilityRealtimeCompleted;
- (BOOL)isAccessibilityElement;
- (BOOL)_accessibilityRealtimeHasUnread;
- (void)_accessibilityHandleATFocused:(BOOL)a0 assistiveTech:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (void)dealloc;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void)textViewDidChange:(id)a0;
- (void)setSendProgressIndex:(unsigned long long)a0;
- (void)updateUtterance:(id)a0;
- (void)updateUtterance:(id)a0 postNotifications:(BOOL)a1;
- (id)utteranceTextColor;
- (void)adjustTextViewSize;

@end
