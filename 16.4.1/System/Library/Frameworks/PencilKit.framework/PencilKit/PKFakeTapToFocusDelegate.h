@class NSString, _PKFakeTapToFocusInfo, NSUUID, UIView, PKFakeUITapGestureForRequirements, UITapGestureRecognizer;

@interface PKFakeTapToFocusDelegate : NSObject <PKScribbleInteractionElementSource, PKScribbleInteractionDelegate, UIGestureRecognizerDelegate> {
    UIView *_view;
    _PKFakeTapToFocusInfo *_focusInfo;
    NSUUID *_elementID;
    UITapGestureRecognizer *_tapGesture;
    PKFakeUITapGestureForRequirements *_gestureForRequirements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_infoInProcess;
+ (BOOL)_shouldAttachForView:(id)a0;
+ (id)_tapGestureForView:(id)a0;
+ (BOOL)isPossibleForView:(id)a0 focusInfo:(id)a1;

- (BOOL)_scribbleInteractionIsEnabled:(id)a0;
- (BOOL)_scribbleInteraction:(id)a0 focusWillTransformElement:(id)a1;
- (void)_scribbleInteraction:(id)a0 requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (BOOL)_scribbleInteraction:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scribbleInteraction:(id)a0 frameForElement:(id)a1;
- (void).cxx_destruct;
- (void)_scribbleInteraction:(id)a0 focusElement:(id)a1 initialFocusSelectionReferencePoint:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)_scribbleInteraction:(id)a0 didTargetElement:(id)a1 forTouches:(id)a2 event:(id)a3;
- (void)_focusWithFocusInfo:(id)a0;
- (BOOL)_shouldFocusBeforeObservingWithFocusInfo:(id)a0;
- (void)_waitForFirstResponderChangeWithFocusInfo:(id)a0 completion:(id /* block */)a1;

@end
