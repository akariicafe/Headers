@class _UIPortalView, UIVisualEffectView, NSHashTable, UIView;

@interface _UIInteractiveHighlightViewRecord : NSObject

@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) UIView *superview;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) _UIPortalView *portalView;
@property (retain, nonatomic) NSHashTable *interactiveHighlightEffects;

- (void).cxx_destruct;

@end
