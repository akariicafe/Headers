@class NSString, UIPreviewInteraction;

@interface _UIPreviewInteractionFailureRelationshipGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIPreviewInteraction *previewInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_gestureRecognizerFailed:(id)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)initWithPreviewInteraction:(id)a0;
- (void)setStateToFailed;
- (void)setStateToRecognized;

@end
