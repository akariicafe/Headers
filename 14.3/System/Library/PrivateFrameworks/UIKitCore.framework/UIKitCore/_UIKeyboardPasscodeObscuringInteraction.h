@class NSString, UIPointerInteraction, UIView;

@interface _UIKeyboardPasscodeObscuringInteraction : NSObject <UIPointerInteractionDelegate, UIInteraction>

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToView:(id)a0;
- (void)didMoveToView:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;

@end
