@class UIView, NSArray, TUISystemInputAssistantView, TUIInputAssistantBackdropView, TUIInputAccessoryBackdropView;

@interface TUIInputAssistantHostView : UIView

@property (readonly, nonatomic) TUIInputAccessoryBackdropView *inputAccessoryBackdropView;
@property (readonly, nonatomic) TUIInputAssistantBackdropView *inputAssistantBackdropView;
@property (retain, nonatomic) NSArray *inputAccessoryBackdropConstraints;
@property (retain, nonatomic) NSArray *inputAssistantBackdropConstraints;
@property (retain, nonatomic) TUISystemInputAssistantView *systemInputAssistantView;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transformForContent;
@property (nonatomic, setter=setCompact:) BOOL isCompact;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (int)textEffectsVisibilityLevel;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)ensureInputAssistantConstraints;
- (void)updateInputAccessoryBackdrop;
- (void)updateInputAssistantBackdrop;

@end
