@class UIFont, NSString, NSArray, UIButton;
@protocol PXComposeRecipientViewDelegate;

@interface PXComposeRecipientView : UIView {
    struct { BOOL textDidChange; BOOL didFinishEnteringAddress; BOOL requestAddRecipient; BOOL didFinishPickingRecipient; BOOL disambiguateRecipient; BOOL didAddRecipient; BOOL didRemoveRecipient; BOOL didChangeSize; } _delegateRespondsTo;
}

@property (weak, nonatomic) id<PXComposeRecipientViewDelegate> delegate;
@property (readonly, nonatomic) UIFont *baseFont;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) UIButton *addButton;
@property (nonatomic) long long maxRecipients;
@property (nonatomic, getter=isSeparatorHidden) BOOL separatorHidden;
@property (readonly, copy, nonatomic) NSArray *recipients;

- (void)removeRecipient:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addRecipients:(id)a0;
- (void)addRecipient:(id)a0;
- (void)removeRecipients:(id)a0;

@end
