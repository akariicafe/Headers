@class NSString, CLKUIRenderFrequencyLink, CLKUIQuadView;

@interface CLKUIQuadViewRenderCoordinator : NSObject <CLKUIRenderCoordinator> {
    CLKUIQuadView *_quadView;
    CLKUIRenderFrequencyLink *_renderFrequencyLink;
}

@property (nonatomic) unsigned long long preferredFramesPerSecond;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)timestamp;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_renderLinkFired:(id)a0;
- (id)initWithQuadView:(id)a0 synchronizeWithClockTimer:(BOOL)a1;

@end
