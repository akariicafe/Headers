@class SXTextView, NSString;

@interface SXButtonComponentView : SXComponentView <SXTextViewDelegate>

@property (readonly, nonatomic) SXTextView *textView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } typographicBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setAbsoluteFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)provideInfosLayoutTo:(id)a0;
- (id)accessibilityLabel;
- (void)didMoveToSuperview;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3;
- (void)receivedInfo:(id)a0 fromLayoutingPhaseWithIdentifier:(id)a1;
- (void)setPresentationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })absoluteTextViewFrame;
- (id)componentIdentifierForTextView:(id)a0;
- (id)textRulesForTextView:(id)a0;
- (id)accessibilityContextualLabelForTextView:(id)a0;
- (id)accessibilityCustomRotorMembershipForTextView:(id)a0;

@end
