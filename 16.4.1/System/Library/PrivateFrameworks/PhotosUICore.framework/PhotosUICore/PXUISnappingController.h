@class UISelectionFeedbackGenerator;

@interface PXUISnappingController : PXSnappingController

@property (retain, nonatomic, setter=_setSelectionBehavior:) UISelectionFeedbackGenerator *_selectionBehavior;

- (void).cxx_destruct;
- (void)didSnapByAttraction;
- (id)initWithSnappingTarget:(double)a0;
- (void)interactionBegan;

@end
