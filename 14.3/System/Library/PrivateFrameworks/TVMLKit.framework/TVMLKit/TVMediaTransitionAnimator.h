@class NSString;
@protocol TVMediaControllerHosting;

@interface TVMediaTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    BOOL _migrates;
}

@property (retain, nonatomic) id<TVMediaControllerHosting> fromHost;
@property (retain, nonatomic) id<TVMediaControllerHosting> toHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
