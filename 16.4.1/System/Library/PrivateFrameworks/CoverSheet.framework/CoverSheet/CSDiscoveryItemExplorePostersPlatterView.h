@class CALayer, CAStateController;
@protocol CSDiscoveryItemExplorePostersPlatterViewDelegate;

@interface CSDiscoveryItemExplorePostersPlatterView : PLPlatterDiscoveryView

@property (retain, nonatomic) CAStateController *graphicStateController;
@property (retain, nonatomic) CALayer *rootAnimationLayer;
@property (nonatomic, getter=isAnimationPaused) BOOL animationPaused;
@property (weak, nonatomic) id<CSDiscoveryItemExplorePostersPlatterViewDelegate> delegate;

- (void)_configureGraphicViewIfNecessary;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)pauseAnimations;
- (void)resumeAnimations;
- (void)_pauseLayer:(id)a0;
- (void)_resumeLayer:(id)a0;
- (void)_reconfigureGraphicView;

@end
