@class NSString, SBWallpaperViewController;

@interface _SBWallpaperViewControllerScaleAssertion : NSObject <SBWallpaperScaleInvalidating, BSDescriptionProviding>

@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, weak, nonatomic) SBWallpaperViewController *wallpaperViewController;
@property (readonly) double scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (id)initWithWallpaperViewController:(id)a0 scale:(double)a1;
- (void)invalidateWithAnimationFactory:(id)a0;

@end
