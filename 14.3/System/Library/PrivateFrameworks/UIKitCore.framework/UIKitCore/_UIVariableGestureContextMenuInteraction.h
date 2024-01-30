@interface _UIVariableGestureContextMenuInteraction : UIContextMenuInteraction {
    struct { unsigned char presentOnTouchDown : 1; } _flags;
}

@property (weak, nonatomic, setter=_setProxySender:) id _proxySender;
@property (nonatomic, setter=_setPresentOnTouchDown:) BOOL _presentOnTouchDown;
@property (nonatomic, setter=_setPrefersCompactAppearance:) BOOL _prefersCompactAppearance;

- (void)_willBeginWithConfiguration:(id)a0;
- (long long)menuAppearance;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)_interactionDrivers;
- (BOOL)_clickPresentationInteractionShouldPlayFeedback:(id)a0;

@end
