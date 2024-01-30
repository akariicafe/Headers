@class NSString, BSUIAnimationFactory;

@interface _SBWallpaperRemoteViewControllerScaleAssertion : BSSimpleAssertion <SBWWallpaperScaleInvalidating> {
    BSUIAnimationFactory *_invalidationAnimationFactory;
}

@property (readonly, nonatomic) double scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidateWithAnimationFactory:(id)a0;
- (id)initWithScale:(double)a0 forReason:(id)a1 invalidationBlock:(id /* block */)a2;

@end
