@class NSString, SBWWallpaperViewController;

@interface _SBWWallpaperViewControllerScaleAssertion : NSObject <SBWWallpaperScaleInvalidating, BSDescriptionProviding>

@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, weak, nonatomic) SBWWallpaperViewController *wallpaperViewController;
@property (readonly) double scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)initWithWallpaperViewController:(id)a0 scale:(double)a1;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)invalidateWithAnimationFactory:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (void)dealloc;

@end
