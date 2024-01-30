@class UIButton, UITextView, NSString;
@protocol CKJunkRecoveryTranscriptCellDelegate;

@interface CKJunkRecoveryTranscriptCell : CKTranscriptCell <CKTranscriptCollectionViewCellProtocol, UITextViewDelegate>

@property (retain, nonatomic) UITextView *recoverConversationTextView;
@property (retain, nonatomic) UIButton *deleteConversationButton;
@property (retain, nonatomic) UIButton *recoverJunkButton;
@property (weak, nonatomic) id<CKJunkRecoveryTranscriptCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (id)_attributedRecoverConversationStringWithDeletionDate:(id)a0;
+ (id)generateDeleteConversationButton;
+ (id)generateRecoverConversationTextView;
+ (id)generateRecoverJunkButton;
+ (double)heightForChatItem:(id)a0 fittingSize:(struct CGSize { double x0; double x1; })a1;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_configureRecoverConversationTextView:(id)a0;
- (void)_layoutLabelInAlignmentContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureForChatItem:(id)a0 context:(id)a1;
- (void)deleteConversationButtonPressed:(id)a0;
- (void)layoutSubviewsForAlignmentContents;
- (void)recoverJunkButtonPressed:(id)a0;
- (void)updateRecoverConversationTextViewContentForDate:(id)a0;

@end
