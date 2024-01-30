@class NSMutableDictionary, NSString, UIView, _UIGestureStudyClickInteraction, _UIGestureStudyMetricsGestureRecognizer;
@protocol _UIGestureStudyInteractionDelegate;

@interface _UIGestureStudyInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>

@property (weak, nonatomic) id<_UIGestureStudyInteractionDelegate> delegate;
@property (retain, nonatomic) _UIGestureStudyClickInteraction *forceClickInteraction;
@property (retain, nonatomic) _UIGestureStudyClickInteraction *longPressClickInteraction;
@property (retain, nonatomic) _UIGestureStudyMetricsGestureRecognizer *metricsGestureRecognizer;
@property (retain, nonatomic) NSMutableDictionary *eventMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

- (struct CGPoint { double x0; double x1; })locationInCoordinateSpace:(id)a0;
- (void)willMoveToView:(id)a0;
- (void)didMoveToView:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)_handleMetricsEvent:(id)a0;
- (void)_interactionDidTrigger:(id)a0;
- (void)_reportEventForTriggeredParticipant:(id)a0;
- (id)_baseMetadataForTriggeredParticipant:(id)a0;
- (id)_viewRegionForTriggeredParticipant:(id)a0;
- (id)_numberOfActiveTouches;

@end
