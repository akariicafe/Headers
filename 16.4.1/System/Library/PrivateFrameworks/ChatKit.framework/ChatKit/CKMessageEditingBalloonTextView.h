@class NSString;
@protocol CKBalloonTextViewInteractionDelegate;

@interface CKMessageEditingBalloonTextView : CKMessageEntryTextView <CKBalloonTextViewProtocol>

@property (weak, nonatomic) id<CKBalloonTextViewInteractionDelegate> interactionDelegate;
@property (nonatomic, getter=isFakeSelected) BOOL fakeSelected;
@property (nonatomic) BOOL shouldAdjustInsetsForMinimumSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setBalloonTextSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 isSingleLine:(BOOL *)a2 isReplyPreview:(BOOL)a3;

@end
