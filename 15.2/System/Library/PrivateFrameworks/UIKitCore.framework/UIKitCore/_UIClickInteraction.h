@class NSString, _UIClickFeedbackGenerator, UIView;
@protocol _UIClickInteractionDriving, _UIClickInteractionDelegate, UIInteractionEffect;

@interface _UIClickInteraction : NSObject <_UIClickInteractionDriverDelegate, UIInteraction_Private, UIInteraction_Internal, UIInteraction>

@property (retain, nonatomic) id<_UIClickInteractionDriving> driver;
@property (retain, nonatomic) _UIClickFeedbackGenerator *feedbackGenerator;
@property (nonatomic) BOOL driverCancelsTouchesInView;
@property (nonatomic, setter=_setOverrideDriverClass:) Class overrideDriverClass;
@property (nonatomic) BOOL hapticsEnabled;
@property (weak, nonatomic) id<_UIClickInteractionDelegate> delegate;
@property (nonatomic) double allowableMovement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<UIInteractionEffect> interactionEffect;
@property (readonly, weak, nonatomic) UIView *view;

- (void)clickDriver:(id)a0 didPerformEvent:(unsigned long long)a1;
- (void)_beginInteraction;
- (void)_viewTraitCollectionDidChange:(id)a0;
- (void)clickDriver:(id)a0 shouldBegin:(id /* block */)a1;
- (void)didMoveToView:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInCoordinateSpace:(id)a0;
- (void)cancelInteraction;
- (Class)_driverClass;
- (void)willMoveToView:(id)a0;
- (void)_endInteraction;
- (void)_createFeedbackGenerator;
- (void)clickDriver:(id)a0 didUpdateHighlightProgress:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_updateDriver;

@end
