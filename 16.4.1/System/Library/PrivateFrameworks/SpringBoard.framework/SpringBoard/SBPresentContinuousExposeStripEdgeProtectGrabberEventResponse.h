@interface SBPresentContinuousExposeStripEdgeProtectGrabberEventResponse : SBSwitcherModifierEventResponse

@property (nonatomic, getter=isInitialPresentation) BOOL initialPresentation;

- (long long)type;
- (id)initForInitialPresentation:(BOOL)a0;

@end
