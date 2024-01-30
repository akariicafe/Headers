@class BSProcessHandle, SBTransientOverlayViewController, SBWindowScene;

@interface SBMutableTransientOverlayPresentationRequest : SBTransientOverlayPresentationRequest

@property (nonatomic, getter=isAnimated) BOOL animated;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL shouldDismissSiri;
@property (retain, nonatomic) SBTransientOverlayViewController *viewController;
@property (weak, nonatomic) SBWindowScene *windowScene;
@property (retain, nonatomic) BSProcessHandle *originatingProcess;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setViewController:(id)a0;
- (void)setAnimated:(BOOL)a0;
- (void)setWindowScene:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCompletionHandler:(id /* block */)a0;
- (void)setOriginatingProcess:(id)a0;
- (void)setShouldDismissSiri:(BOOL)a0;

@end
