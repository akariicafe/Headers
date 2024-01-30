@class NSString, UIPreviewInteraction;

@interface _UIPreviewInteractionFailureRelationshipGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>

@property (weak, nonatomic) UIPreviewInteraction *previewInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_gestureRecognizerFailed:(id)a0;
- (void)setStateToRecognized;
- (void)setStateToFailed;
- (id)initWithPreviewInteraction:(id)a0;

@end
