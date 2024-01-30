@class NSString, UIView;
@protocol MKPhotoGalleryTransitionAnimator;

@interface MKPhotoGalleryTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIView *transitionView;
@property (weak, nonatomic) id<MKPhotoGalleryTransitionAnimator> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
