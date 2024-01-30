@class NSString, NSTextContainer, UIView, UITapGestureRecognizer;
@protocol WFTextAttachmentInteractionDelegate;

@interface WFTextAttachmentInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>

@property (weak, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) id<WFTextAttachmentInteractionDelegate> delegate;
@property (retain, nonatomic) NSTextContainer *textContainer;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textContainerInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

- (id)layoutManager;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)dealloc;
- (id)textStorage;
- (void)willMoveToView:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToView:(id)a0;
- (id)attachmentAtPoint:(struct CGPoint { double x0; double x1; })a0 characterRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)handleTextTap:(id)a0;

@end
