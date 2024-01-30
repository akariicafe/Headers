@class SBTransientOverlayViewController;

@interface SBWorkspaceTransientOverlay : SBWorkspaceEntity

@property (readonly, nonatomic) SBTransientOverlayViewController *viewController;

- (id /* block */)_generator;
- (id)initWithViewController:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
