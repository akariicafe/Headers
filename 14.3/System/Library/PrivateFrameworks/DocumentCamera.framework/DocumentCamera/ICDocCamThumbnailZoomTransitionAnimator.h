@class UIImage, NSIndexPath, NSString;

@interface ICDocCamThumbnailZoomTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIImage *thumbnailImage;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) BOOL presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (BOOL)_shouldCrossFadeNavigationBar;
- (id)initWithImage:(id)a0 indexPath:(id)a1 duration:(double)a2 completion:(id /* block */)a3;

@end
