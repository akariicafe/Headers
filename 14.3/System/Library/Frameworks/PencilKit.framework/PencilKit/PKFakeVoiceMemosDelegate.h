@class NSString, UIView;

@interface PKFakeVoiceMemosDelegate : NSObject <PKScribbleInteractionDelegate> {
    UIView *_view;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_scribbleInteraction:(id)a0 hitToleranceInsetsForElement:(id)a1 defaultInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;

@end
